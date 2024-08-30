#include <iostream>
#include <stdio.h>

#include "functions.hpp"

int main() 
{
    int a[] = {9, 2, 5, 10, 4, 8, 3, 11, 7};
    int ans = 0;
    //Search

    //linear search
        ans = linear_search(a, sizeof(a) / sizeof(a[0]), 3);
        printf("index=%d \n", ans);
        ans = 0;
    //sential linear search
        ans = sential_linear_search(a, sizeof(a) / sizeof(a[0]), 3);
        printf("index=%d \n", ans);
        ans = 0;
    //linear search with recursion
        ans = linear_search_with_recursion(a, sizeof(a) / sizeof(a[0]), 3, 0);
        printf("index=%d \n", ans);
        ans = 0;

    //Sorting

    //Selection sorting
        selection_sort(a, sizeof(a) / sizeof(a[0]));
        for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
            printf("%d \n", a[i]);
    
    //Binary searching
        ans = binary_linear_search (a, sizeof(a) / sizeof(a[0]), 3);
        printf("index=%d \n", ans); 
        ans = 0;
    //Binary recursive searching      
        ans = binary_linear_recurs_search (a, sizeof(a) / sizeof(a[0]), 3);
        printf("index=%d \n", ans); 
        ans = 0;
    
    return 0;
}
