#include<stdio.h>
#include<string.h>

int main()

{

    char x[21], y[21];
    scanf("%s %s", x, y);
    int d = strcmp(x, y);
    if(d < 0)
    {
        printf("%s\n", x);
    }
    else if(d > 0)
    {
        printf("%s\n", y);
    }
    else
    {
        printf("%s\n", x);
    }
    


    return 0;
}