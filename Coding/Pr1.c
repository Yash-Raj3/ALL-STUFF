#include <stdio.h>
#include <stdbool.h>
bool search(char name[][3], char Name[3])
{
    int i, j;
    bool found = true;
    for (i = 0; i < 3; i++)
    {
        found = true;
        for (j = 0; j < 3; j++)
        {
            if (name[i][j] != Name[j])
            {
                found = false;
                break;
            }
        }
        if (found)
            return true;
    }
    return false;
}

int main()
{
    char name[3][3] = {
        {'a', 'l', 'i'},
        {'t', 'o', 'm'},
        {'b', 'o', 'b'}};
    char Name[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter Your Name letters(One by One):");
        scanf(" %c", &Name[i]);
    }
    bool Found = search(name, Name);
    if (Found)
    {
        printf("Found");
    }
    else
    {
        printf("Not Found");
    }
    return 0;
}