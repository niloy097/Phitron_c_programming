#include<stdio.h>

int main()

{

    int n; //5
    scanf("%d", &n);
    int arr[n+1];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); // 5, 20, 34, 54, 44, _
    }
    int pos, val;
    scanf("%d %d", &pos, &val);
    for(int i = n; i >= pos; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[pos] = val;
    for(int i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}