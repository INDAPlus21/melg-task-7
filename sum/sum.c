#include <stdio.h>
#include <stdlib.h>

// Function for sorting source: https://stackoverflow.com/questions/17638499/using-qsort-to-sort-an-array-of-long-long-int-not-working-for-large-nos/26428052
int cmpfunc(const void *a, const void *b)
{
    if (*(long int *)a - *(long int *)b < 0)
        return -1;
    if (*(long int *)a - *(long int *)b > 0)
        return 1;
    return 0;
}

int main()
{
    int count;
    scanf("%d", &count);

    long values[count];

    for (int c = 0; c < count; c++)
    {
        long item;
        scanf("%ld", &item);

        values[c] = item;
    }

    // Sort
    qsort(values, count, sizeof(long), cmpfunc);

    // Add half of the highest values together
    long returnValue = 0;
    for (int i = 0; i < (count + 1) / 2; i++)
    {
        returnValue += values[count - i - 1];
    }

    printf("%ld", returnValue);
}