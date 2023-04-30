#include<stdio.h>

int main()

{

    int n;
    scanf("%d", &n); // 5
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);// 34, 53, 63, 34, 33
    }
    int pos; 
    scanf("%d", &pos);
    for(int i = pos; i < n-1; i++)
    {
        arr[i] = arr[i + 1];
    }
    for(int i = 0; i < n - 1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}