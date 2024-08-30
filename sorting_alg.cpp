#include <iostream>
#include <stdio.h>

#include "functions.hpp"

#define not_found -1

//Selection sorting
int selection_sort (int* massive, int size)
{
    int smallest;
    int swap;
    for (int i = 0; i < size; i++)
    {
        smallest = i;
        for (int j = i + 1; j < size; j++)
        {
            if (massive[j] < massive[smallest])
                smallest = j;
        }
        swap = massive[i];
        massive[i] = massive[smallest];
        massive[smallest] = swap;
    }
    return 0;
}