#include<stdio.h>

int main()

{

    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count[m+1];
    for(int i = 0; i < m+1; i++)
    {
        count[i] = 0;
    }
    for(int i = 0; i < n; i++)
    {
        int val = arr[i];
        count[val]++;
    }

    for(int i = 1; i < m+1; i++)
    {
        printf("%d\n", count[i]);
    }
    return 0;
}