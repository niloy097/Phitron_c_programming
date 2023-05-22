#include<stdio.h>
int fun(int x)
{   if(x == 11) return 0;
    int s;
    s = x + fun(x + 1);
    return s;
}
int main()

{
    int x = fun(1);
    printf("%d", x);
    /*int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }*/

    return 0;
}