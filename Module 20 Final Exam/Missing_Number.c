#include<stdio.h>

int main()

{

    int t;
    scanf("%d", &t);
    if(t == 0)
    {
        long long int s, a, b, c;
        scanf("%lld %lld %lld %lld", &s, &a, &b, &c);
        long long int missing_number = s-(a+b+c);
        printf("%lld\n", missing_number);
    }
    else
    {
        for(int i = 1; i <= t; i++)
        {
            long long int s, a, b, c;
            scanf("%lld %lld %lld %lld", &s, &a, &b, &c);
            long long int missing_number = s-(a+b+c);
            printf("%lld\n", missing_number);
        }
    }

    return 0;
}