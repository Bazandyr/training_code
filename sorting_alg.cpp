// Online C++ compiler to run C++ program online
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

int main() {
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
