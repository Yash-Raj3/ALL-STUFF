#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DATA_FILE "members.dat"

typedef struct {
    int year;
    int  month;
    int date;
} Dmy;

typedef struct {
    int roll;
    char fullName[100];
    char dept[100];
    char memCat[10];
    Dmy joinDate;
    Dmy birth;
    char area[20];
} Member;

Member *records = NULL;
int recCount = 0;

void loadData(const char *file);
void saveData(const char *file);
void insertMember();
void modifyMember(int rid);
void removeMember(int rid);
void showAll();
void deptSummary();
void releaseAll();

int main() {
    int opt, tempID;

    loadData(DATA_FILE);

    while (1) {
        printf("\n=== Membership Dashboard ===\n");
        printf("1. Add Member\n");
        printf("2. Modify Member\n");
        printf("3. Remove Member\n");
        printf("4. Show All Members\n");
        printf("5. Department Summary\n");
        printf("6. Exit\n");
        printf("Choose: ");

        if (scanf("%d", &opt) != 1) {
            while (getchar() != '\n');
            continue;
        }
        while (getchar() != '\n');

        switch (opt) {
            case 1:
                insertMember();
                break;
            case 2:
                printf("Enter Member Roll: ");
                scanf("%d", &tempID);
                modifyMember(tempID);
                break;
            case 3:
                printf("Enter Member Roll: ");
                scanf("%d", &tempID);
                removeMember(tempID);
                break;
            case 4:
                showAll();
                break;
            case 5:
                deptSummary();
                break;
            case 6:
                saveData(DATA_FILE);
                releaseAll();
                printf("Goodbye!\n");
                exit(0);
            default:
                printf("Invalid Option!\n");
        }
    }
    return 0;
}

void loadData(const char *file) {
    FILE *fp = fopen(file, "rb");
    if (fp == NULL) return;

    Member tmp;
    while (fread(&tmp, sizeof(Member), 1, fp)) {
        Member *p = realloc(records, (recCount + 1) * sizeof(Member));
        if (p == NULL) {
            fclose(fp);
            exit(1);
        }
        records = p;
        records[recCount] = tmp;
        recCount++;
    }
    fclose(fp);
}

void saveData(const char *file) {
    FILE *fp = fopen(file, "wb");
    if (fp == NULL) return;

    if (recCount > 0)
        fwrite(records, sizeof(Member), recCount, fp);

    fclose(fp);
}

void insertMember() {
    Member x;

    printf("\nEnter Roll Number: ");
    scanf("%d", &x.roll);
    while (getchar() != '\n');

    for (int i = 0; i < recCount; i++) {
        if (records[i].roll == x.roll) {
            printf("Roll already exists!\n");
            return;
        }
    }

    printf("Enter Name: ");
    fgets(x.fullName, 100, stdin);
    x.fullName[strcspn(x.fullName, "\n")] = 0;

    printf("Enter Department: ");
    fgets(x.dept, 100, stdin);
    x.dept[strcspn(x.dept, "\n")] = 0;

    printf("Enter Membership (IEEE/ACM): ");
    scanf("%s", x.memCat);

    printf("Enter Join Date (Y M D): ");
    scanf("%d %d %d", &x.joinDate.year, &x.joinDate.month, &x.joinDate.date);

    printf("Enter Birth Date (Y M D): ");
    scanf("%d %d %d", &x.birth.year, &x.birth.month, &x.birth.date);

    printf("Enter Area: ");
    scanf("%s", x.area);

    Member *p = realloc(records, (recCount + 1) * sizeof(Member));
    if (p == NULL) return;

    records = p;
    records[recCount] = x;
    recCount++;

    saveData(DATA_FILE);
}

void modifyMember(int rid) {
    int idx = -1;
    for (int i = 0; i < recCount; i++) {
        if (records[i].roll == rid) {
            idx = i;
            break;
        }
    }

    if (idx == -1) {
        printf("Member not found.\n");
        return;
    }

    int opt;
    printf("\nEditing: %s\n", records[idx].fullName);
    printf("1. Change Department\n");
    printf("2. Change Membership\n");
    printf("Choose: ");
    scanf("%d", &opt);
    while (getchar() != '\n');

    if (opt == 1) {
        printf("New Department: ");
        fgets(records[idx].dept, 100, stdin);
        records[idx].dept[strcspn(records[idx].dept, "\n")] = 0;
    } else if (opt == 2) {
        printf("New Membership: ");
        scanf("%s", records[idx].memCat);
    } else {
        printf("Invalid Option.\n");
        return;
    }

    saveData(DATA_FILE);
}

void removeMember(int rid) {
    int idx = -1;
    for (int i = 0; i < recCount; i++) {
        if (records[i].roll == rid) {
            idx = i;
            break;
        }
    }

    if (idx == -1) {
        printf("Not found.\n");
        return;
    }

    for (int i = idx; i < recCount - 1; i++)
        records[i] = records[i + 1];

    recCount--;

    if (recCount > 0) {
        Member *p = realloc(records, recCount * sizeof(Member));
        if (p != NULL) records = p;
    } else {
        free(records);
        records = NULL;
    }

    saveData(DATA_FILE);
}

void showAll() {
    if (recCount == 0) {
        printf("\nNo Entries.\n");
        return;
    }

    printf("\n%-5s %-20s %-10s %-10s %-15s\n", "Roll", "Name", "Dept", "Type", "Area");
    printf("---------------------------------------------------------------\n");

    for (int i = 0; i < recCount; i++) {
        printf("%-5d %-20s %-10s %-10s %-15s\n",
               records[i].roll,
               records[i].fullName,
               records[i].dept,
               records[i].memCat,
               records[i].area);
    }
}

void deptSummary() {
    char deptSel[100];
    while (getchar() != '\n');
    printf("\nEnter Department: ");
    fgets(deptSel, 100, stdin);
    deptSel[strcspn(deptSel, "\n")] = 0;

    printf("\n--- Department: %s ---\n", deptSel);
    printf("%-5s %-20s %-10s\n", "Roll", "Name", "Type");

    int found = 0;
    for (int i = 0; i < recCount; i++) {
        if (strcmp(records[i].dept, deptSel) == 0) {
            printf("%-5d %-20s %-10s\n",
                   records[i].roll,
                   records[i].fullName,
                   records[i].memCat);
            found = 1;
        }
    }

    if (!found) printf("No entries.\n");
}

void releaseAll() {
    if (records != NULL) {
        free(records);
        records = NULL;
    }
}
