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
    int h_marks = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(h_marks < arr[i])
        {
            h_marks = arr[i];
        }
    }
    for(int i = 0; i < n; i++)
    {
        printf("%d ", h_marks - arr[i]);
    }
    return 0;
}