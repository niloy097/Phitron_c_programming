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
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                int tmp = arr[j];
                arr[j] = arr[i];
                arr[i] = tmp;
            }
        }
    }
    if(n % 2 != 0)
    {
        printf("%d\n", arr[((n+1)/2)-1]);
    }
    else
    {
        printf("%d %d\n", arr[(n/2)-1], arr[((n/2)+1)-1]);
    }
    
    return 0;
}