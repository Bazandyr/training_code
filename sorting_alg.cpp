#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <limits> 

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

//Intersection sorting (sort utill i elements)
int intersection_sort(int* massive, int size)
{
    int key;
    int j;
    for (int i = 2; i < size; i++)
    {
        key = massive[i];
        j = i - 1;
        while (j > 0 && massive[j] > key)
        {
            massive[j + 1] = massive[j];
            j--;
        }
        massive[j + 1] = key;
    }
    return 0;
}

//Merge elements
int merge(int* massive, int start, int end, int part)
{
    int n_1 = part - start + 1;
    int n_2 = end - part;

    //Creating temporary arrays
    int* array_1 = new int[n_1 + 1];
    int* array_2 = new int[n_2 + 1];

    int inf = std::numeric_limits<int>::max();  // limiter

    // Copying elements to temporary arrays
    std::copy(massive + start, massive + start + n_1, array_1);
    std::copy(massive + (part + 1), massive + part + 1 + n_2, array_2);


    array_1[n_1 + 1] = inf;
    array_2[n_2 + 1] = inf;

    //Merge arrays back into massive
    int i = 0, j = 0;
    for (int k = start; k < end; k++)
    {
        if(array_1[i] <= array_2[j])
        {
            massive[k] = array_1[i];
            i++;
        }
        else
        {
            massive[k] = array_2[j];
            j++;
        }

    }
    
    //Freeing up memory
    delete[] array_1;
    delete[] array_2;
    return 0;
}

//Merge sorting
int merge_sort(int* massive, int p, int size)
{
    if(p < size)
    {
        int q = (p + size) / 2;
        merge_sort(massive, p, q);
        merge_sort(massive, (q + 1), size);
        merge(massive, p, size, q);
    }
    return 0;
}
