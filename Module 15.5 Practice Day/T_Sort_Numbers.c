#include<stdio.h>

int main()

{

    int arr[3];
    for(int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
    }
    int a, b, c;
    a = arr[0];
    b = arr[1];
    c = arr[2];
    //sorting -->
    for(int i = 0; i < 3 -1; i++)
    {
        for(int j = i+1; j < 3; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    for(int i = 0; i < 3; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("\n");
    printf("%d\n%d\n%d\n", a, b, c);
    return 0;
}