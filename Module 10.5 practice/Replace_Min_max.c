#include<stdio.h>

int main()

{

    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max, min, max_index = 0, min_index = 0;
    max = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
            max_index = i;
        }
    }

    // printf("%d\n", max);

    min = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
            min_index = i;
        }
    }
    // printf("%d\n", min);
    // printf("Max: %d max_ind: %d Min: %d min_ind: %d", max,  max_index, min, min_index);
    int temp;
    temp = arr[min_index];
    arr[min_index] = arr[max_index];
    arr[max_index] = temp;

    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}