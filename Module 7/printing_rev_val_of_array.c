#include<stdio.h>

int main()

{

    int size;
    scanf("%d", &size);
    int arr[size];
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = size-1; i >= 0; i--)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}