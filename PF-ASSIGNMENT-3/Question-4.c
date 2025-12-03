#include <stdio.h>
#include <string.h>
typedef struct Book
{
	int id;
	int popularity;
	int used;
} B;
void add(B shelf[], int id, int popularity, int *Currsize, int cap, int *timecount)
{
	(*timecount)++;
	for (int i = 0; i < cap; i++)
	{
		if (shelf[i].id == id)
		{
			shelf[i].popularity += popularity;
			shelf[i].used = *timecount;
			return;
		}

		if (*Currsize == cap)
		{
			int lru = 0;
			for (int i = 0; i < cap; i++)
			{
				if (shelf[i].used < shelf[lru].used)
				{
					lru = i;
				}
			}
			shelf[lru].id = id;
			shelf[lru].popularity = popularity;
			shelf[lru].used = *timecount;
			return;
		}
		shelf[i].id = id;
		shelf[i].popularity = popularity;
		shelf[i].used = *timecount;
		(*Currsize)++;
	}
}
int access(B shelf[], int id, int cap, int *timecount)
{
	(*timecount)++;
	int found = 0;
	for (int i = 0; i < cap; i++)
	{
		if (id == shelf[i].id)
		{
			shelf[i].used = *timecount;
			int found = 1;
			return shelf[i].popularity;
		}
	}
	if (found == 0)
	{
		return -1;
	}
}
int main()
{
	int cap, Q;
	printf("Enter Capacity and Number of Operations: ");
	scanf("%d %d", &cap, &Q);
	B shelf[cap];
	int timecount = 0;
	int currSize = 0;
	int popularity, id;
	char operation[10];
	for (int i = 0; i < Q; i++)
	{
		printf("Enter Operation: ");
		scanf("%s", operation);
		if (strcmpi(operation, "ADD") == 0)
		{
			printf("Enter ID and Popularity: ");
			scanf("%d %d", &id, &popularity);
			add(shelf, id, popularity, &currSize, cap, &timecount);
		}
		else if (strcmpi(operation, "ACCESS") == 0)
		{
			printf("Enter Id: ");
			scanf("%d", &id);
			int result = access(shelf, id, cap, &timecount);
			printf("%d\n", result);
		}
	}
}
