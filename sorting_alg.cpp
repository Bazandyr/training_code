#include <iostream>
#include <stdio.h>

#define not_found -1

int linear_search (int* massive, int size, int search_elem)
{
    int ans = not_found;
    for (int i = 0; i < size; i++)
    {
        if(massive[i] == search_elem)
        {
            ans = i;
            break;
        }
    }
    return ans;
}

int sential_linear_search(int* massive, int size, int search_elem)
{
    int last = massive[size - 1];
    massive[size - 1] = search_elem;
    int i = 0;
    while (massive[i] != search_elem)
        i++;
    massive[size - 1] = last;
    if (i < size || massive[size] == search_elem)
        return i;
    return not_found;
}
