#include<stdio.h>

int main()

{

    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i+=k)
    {   int min = arr[i];
        for(int j = i; j < i + k && j < n; j++)
        {
            if(min > arr[j])
            {
                min = arr[j];
            }
        }
        printf("%d ", min);
    }
    /*long long int n, k;
    scanf("%lld %lld", &n, &k);
    long long int arr[n];
    for(long long int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    long long int x = n / k; long long int y = n % k;
    long long int c = 0; long long int range = k;
    
    for(long long int a = 1; a <= x; a++)
    {
        long long int min = arr[c];
        for(long long int i = c; i < range; i++)
        {
            if(min > arr[i])
            {
                min = arr[i];
            }
        }
        printf("%lld ", min);
        c = c + k; range = range + k;
    }
    if(n % k != 0)
    {
        long long int mi = arr[c];
        for(long long int i = c; i < y; i++)
        {
            if(mi > arr[i])
                {
                    mi = arr[i];
                }
        }
        printf("%lld", mi);
    }*/
    

    return 0;
}