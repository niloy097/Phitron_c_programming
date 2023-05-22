#include<stdio.h>

int main()

{

    int product, p1, p2, p3; //40 5  4  1
    scanf("%d %d %d %d", &product, &p1, &p2, &p3);
    printf("%d\n", (product)/(p1 * p2 * p3));

    return 0;
}