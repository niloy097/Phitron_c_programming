#include<stdio.h>
void series(int x)
{
    for(int i = 1; i < x; i++)
    {
        printf("%d ", i);
    }
    printf("%d", x);
    printf("\n");
    
}
int main()

{

    int n;
    scanf("%d", &n);
    series(n);

    return 0;
}