#include<stdio.h>

int main()

{

    int n, k;
    scanf("%d %d", &n, &k);
    int i = 1;
    while(i <= k)
    {
        int j = 1;
        while(j <= n)
        {
            printf("%d ", j);
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}