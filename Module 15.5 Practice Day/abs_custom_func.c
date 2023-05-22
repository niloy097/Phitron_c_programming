#include<stdio.h>
int abs (int x);
int main()

{

    int n;
    scanf("%d", &n);
    printf("%d", abs(n));

    return 0;
}

int abs (int x)
{
    if(x >= 0)
    {
        return x;
    }
    else
    {
        return x * -1;
    }
}