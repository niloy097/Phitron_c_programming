/*#include<stdio.h>

int main()

{

    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

    }

    //reverse process-->
    int i = 0;
    int j = n-1;
    while(i < j)
    {
        int temp;
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}*/


/*#include<stdio.h>

int main()

{

    int arr[] = {34, 68, 53 ,63};
    int size = sizeof(arr)/sizeof(int);
    for(int i = 0; i < size/2; i++)
    {
        int temp;
        temp =arr[i]; 
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }

    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}*/