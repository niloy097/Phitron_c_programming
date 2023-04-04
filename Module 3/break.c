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
            break;
        }
        printf("%d\n", i);
    }

    return 0;
}