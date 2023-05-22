#include<stdio.h>
int min_in_array(int *arr, int size)
{
    int min = arr[0];
    for(int i = 1; i < size; i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
    }

    return min;
}
int max_in_array(int *arr, int size)
{
    int max = arr[0];
    for(int i = 1; i < size; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }

    return max;
}
int main()

{

    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int minimum = min_in_array(arr, n);
    int maximum = max_in_array(arr, n);
    printf("%d %d", minimum, maximum);
    printf("\n");

    return 0;
}