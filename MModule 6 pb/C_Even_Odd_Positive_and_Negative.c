#include<stdio.h>

int main()

{

    int n;
    scanf("%d", &n);
    int a, e=0, o = 0, p = 0, neg = 0;

    for(int i = 1; i <= n; i++)
    {
        scanf("%d ", &a);
        if(a % 2 == 0)
        {
            e++;
        }
        if( a % 2 != 0)
        {
            o++;
        }
        if(a > 0)
        {
            p++;
        }
        if(a < 0) 
        {
            neg++;
        }
        
    }
    printf("Even: %d\n", e);
    printf("Odd: %d\n", o);
    printf("Positive: %d\n", p);
    printf("Negative: %d\n", neg);
    return 0;
}