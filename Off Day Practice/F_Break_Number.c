#include<stdio.h>

int main()

{

    long long int n;
    scanf("%lld", &n);
    long long int arr[n]; long long int cnt[n];
    for(long long int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    for(long long int i = 0; i < n; i++)
    {
        cnt[i] = 0;
    }
    for(long long int i = 0; i < n; i++)
    {
        long long int x = arr[i];
        while(1)
        {
            long long int y = x % 2;
            if(y == 0)
            {
                cnt[i]++;
                x = x / 2;
            }
            else
            {
                break;
            }
            
        }
    }
    // for(int i = 0; i < n; i++)
    // {
    //     printf("%d ", cnt[i]);
    // }
    long long int max = cnt[0];
    for(long long int i = 1; i < n; i++)
    {
        if(max < cnt[i])
        {
            max = cnt[i];
        }
    }
    printf("%lld\n", max);
    return 0;
}