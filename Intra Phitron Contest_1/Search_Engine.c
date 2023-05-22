#include<stdio.h>

int main()

{
    int t;
    scanf("%d", &t);
    for(int f = 1; f <= t; f++)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int s;
        scanf("%d", &s);
        int cnt = 0;
        for(int i = 0; i < n; i++)
        {
            if(s == arr[i])
            {
                printf("Case %d: %d\n", f, i+1);
                break;
            }
            else
            {
                cnt++;
            }
        }
        if(cnt == n)
        {
            printf("Case %d: Not Found\n", f);
        }
    }
    return 0;
}