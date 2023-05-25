#include "search_algos.h"

int linear_search(int *array, size_t size, int value)
{
    size_t n = 0;

    if (array == NULL)
    {
        return(-1);
    }

    while (n < size)
    {
        printf("Value checked array [%lu] = [%d]", n, array[n]);
        if (array[n] == value)
        {
            return(1);
        }
    }
    n++;
    return (-1);
}
