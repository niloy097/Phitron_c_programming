#include<stdio.h>

int main()

{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int cnt_even = 0;
        int cnt_odd = 0;
        for(int i = 0; i < n; i++)
        {
            if(arr[i] % 2 == 0)
            {
                cnt_even++;
            }
            else
            {
                cnt_odd++;
            }
        }
        //printf("E:%d O:%d\n", cnt_even, cnt_odd);
        if((cnt_even + cnt_odd) % 2 != 0)
        {
            printf("%d\n", -1);
        }
        else if(cnt_even == cnt_odd)
        {
            printf("%d\n", 0);
        }
        else if(cnt_even < cnt_odd)
        {
            int operation = 0;
            while(cnt_even != cnt_odd)
            {
                cnt_odd--;
                cnt_even++;
                operation++;
            }
            printf("%d\n", operation);
        }
        else if(cnt_even > cnt_odd)
        {
            int operation = 0;
            while(cnt_even != cnt_odd)
            {
                cnt_even--;
                cnt_odd++;
                operation++;
            }
            printf("%d\n", operation);
        }
    }
    return 0;
}

