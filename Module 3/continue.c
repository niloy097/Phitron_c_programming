#include<stdio.h>

int main()

{

    int i;
    int n;
    printf("Enter the val of n: ");
    scanf("%d", &n);
    for(i = 1; i<=n; i++)
    {
        if(i == 5)
        {
             continue;
        }
        printf("%d\n", i);
        // continue;
    }

    return 0;
}