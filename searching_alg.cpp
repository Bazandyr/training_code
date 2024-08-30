#include <iostream>
#include <stdio.h>

#include "functions.hpp"

#define not_found -1

//linear search
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

//sential linear search
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

//linear search with recursion
int linear_search_with_recursion(int* massive, int size, int search_elem, int index)
{
    if(index > size)
        return not_found;
    if(massive[index] == search_elem)
        return index;
    return linear_search_with_recursion(massive, size, search_elem, index + 1);
}

//Binary searching (Only with sorted array)
int binary_linear_search (int* massive, int size, int search_elem)
{
    int index = 0;
    int part = 0;
    while (index <= size)
    {
        part = (index + size) / 2;
        if (massive[part] == search_elem)
            return part;
        else if (massive[part] > search_elem)
            size = part - 1;
        else 
            index = part + 1;   
    }
    return not_found;
}

//Binary recursive searching (Only with sorted array)
int binary_linear_recurs_search (int* massive, int size, int search_elem)
{
    int index = 0;
    int part;
    if (index > size)
        return not_found;
    else
    {
        part = (index + size) / 2;
        if (massive[part] == search_elem)
            return part;
        else if (massive[part] > search_elem)
            return binary_linear_recurs_search(massive, part + 1, search_elem);
        else
            return binary_linear_recurs_search(massive, part + 1, search_elem);
    }
}