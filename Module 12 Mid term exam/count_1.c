#include<stdio.h>

int main()

{

    int n;
    int count_even = 0;
    int count_odd = 0;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            count_even++;
        }
        else
        {
            count_odd++;
        }
    }

    printf("%d %d\n", count_even, count_odd);

    return 0;
}