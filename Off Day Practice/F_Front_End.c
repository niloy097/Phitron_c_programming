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
    if(n % 2 != 0)
    {
        int a = 0;
        int b = n - 1;
        while(1)
        {
            if(a == b)
            {
                printf("%d", arr[a]);
                break;
            }
            printf("%d %d ", arr[a], arr[b]);
            a++;
            b--;
        }
    }
    else
    {
        int a = 0;
        int b = n - 1;
        while(a < b)
        {
            printf("%d %d ", arr[a], arr[b]);
            a++;
            b--;
        }
    }
        return 0;
}