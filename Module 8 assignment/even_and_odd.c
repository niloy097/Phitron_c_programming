#include<stdio.h>

int main()

{

    int n;
    int sum_even = 0;
    int sum_odd = 0;
    scanf("%d", &n);
    int v[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
       
    }
    
    for(int i = 0; i < n; i++)
    {
        if(v[i] % 2 == 0)
        {
            sum_even = sum_even + v[i];
        }
        else
        {
            sum_odd = sum_odd + v[i];
        }
    }

    printf("%d %d\n", sum_even, sum_odd);

    return 0;
}


/*
#include<stdio.h>

int main()

{

    int n;
    int v;
    int sum_even = 0;
    int sum_odd = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &v);
        if(v % 2 == 0)
        {
            sum_even = sum_even + v;
        }
        else
        {
            sum_odd = sum_odd + v;
        }
    }

    printf("%d %d\n", sum_even, sum_odd);

    return 0;
}

*/