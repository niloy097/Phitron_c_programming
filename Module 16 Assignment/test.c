#include<stdio.h>
void update(int *x)
{
    *x = 100;
}
int main()

{

    int x;
    update(&x); //call by reference
    printf("%d", x); //Output: 100
    return 0;
}