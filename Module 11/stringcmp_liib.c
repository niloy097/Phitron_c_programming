#include<stdio.h>
#include<string.h>

int main()

{

    char a[100], b[100];
    scanf("%s %s", a, b);
    int d = strcmp(a, b);
    printf("%d\n", d);

    /*
    
    in strcmp function--->
    if val = 0 --> string are same
    if val = 1 --> One string is small
    if val = -1 --> One string is small
    
    */

    if(d < 0)
    {
        printf("A is small\n");
    }
    else if(d > 0)
    {
        printf("B is small\n");
    }
    else
    {
        printf("Both are same string\n");
    }

    return 0;
}

