#include "in_vector_hill.h"
#include <stdio.h>
int array_max(vec.data, vec.size, int *max)
{
    if (size == 0)
    {
        return 0;
    }
    int *max_index = 0;
    *max = vec.data[0];
    for (size_t i = 0;i <= vec.size - 1;i++)
    {
        if (vec.data[i] >= *max)
        {
            *max = vec.data[i];
            *max_index = i;
        }
    }
    return *max_index;
}
int int_vector_hill(struct int_vector vec)
{
    if (vec.size == 0)
        return -1;
    
