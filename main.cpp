#include <iostream>
#include <stdio.h>

#inlude "function.hpp"

int main() 
{
    int a[] = {9, 2, 5, 10, 4, 8, 3, 11, 7};
    int ans = 0;
    //linear search
        ans = linear_search(a, sizeof(a) / sizeof(a[0]), 3);
        printf("index=%d ", ans);
    //sential linear search
        ans = sential_linear_search(a, sizeof(a) / sizeof(a[0]), 3);
        printf("index=%d ", ans);
    return 0;
}
