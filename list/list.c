#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int count = 0;
    scanf("%d", &count);

    if (count == 0)
    {
        printf("%d", 0);
        return 0;
    }

    // Save all names in a vector
    char names[count * 2][42];

    for (int i = 0; i < count * 2; i++)
    {
        char name[42];
        scanf("%s", name);
        strcpy(names[i], name);
    }

    char fullnames[count][42];

    // Create array of full names
    for (int i = 0; i < count; i++)
    {
        strcpy(fullnames[i], strcat(strcat(names[i], "_"), names[i + count]));
    }

    // Sort array
    qsort(fullnames, count, sizeof(fullnames[0]), strcmp);

    // Default value of one as the first one is guaranteed to be unique
    int answer = 1;

    // Count array
    for (int i = 0; i < count - 1; i++)
    {
        // Add if not the same as next
        if (strcmp(fullnames[i], fullnames[i + 1]) != 0)
        {
            answer++;
        }
    }

    printf("%d", answer);

    return 0;
}