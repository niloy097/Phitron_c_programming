#include<stdio.h>
void fun(long long int x)
{   if(x == 0) return;
    long long int y = x % 10;
    fun(x / 10);
    printf("%lld ", y);
}
int main()

{

    int t;
    scanf("%d", &t);
    while(t--)
    {
        long long int n;
        scanf("%lld", &n);
        fun(n);
        //corner Case for this problem
        if(n == 0)
        {
            printf("%d", 0);
        }
        printf("\n");
    }

    return 0;
}