/*

n = 5;

1 2 3 4 5
1 2 3 4
1 2 3
1 2
1


*/


#include<stdio.h>

int main()

{

    int n, k;
    scanf("%d", &n);
    k = n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= k; j++)
        {
            printf("%d ", j);
        }
        k--;
        printf("\n");
    }

    return 0;
}