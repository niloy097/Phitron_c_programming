#include<stdio.h>

int main()

{

    int n, s, k;
    scanf("%d", &n);
    s = n - 1;
    k = 1;
    for(int i = 1; i <= n; i++)
    {
        if(i % 2 != 0)
        {
            for(int j = 1; j <= s; j++)
            {
                printf(" ");
            }
            for(int j = 1; j <= k; j++)
            {
                printf("^");
            }
        }
        else
        {
            for(int j = 1; j <= s; j++)
            {
                printf(" ");
            }
            for(int j = 1; j <= k; j++)
            {
                printf("*");
            }
        }
        printf("\n");
        s = s - 1;
        k = k + 2;
    }

    return 0;
}