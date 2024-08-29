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



int main() {
    int a[] = {9, 2, 5, 10, 4, 8, 3, 11, 7};
    int ans = 0;
    //linear search
        ans = linear_search(a, sizeof(a) / sizeof(a[0]), 3);
        printf("index=%d ", ans);
    return 0;
}

