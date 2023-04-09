#include<stdio.h>

int main()

{

    char x;
    scanf(" %c", &x);
    if(x >= 65 && x <= 90)
    {
        printf("ALPHA\n");
        printf("IS CAPITAL\n");
    }

    else if(x >= 97 && x <= 122)
    {
        printf("ALPHA\n");
        printf("IS SMALL\n");
    }

    else 
    {
        printf("IS DIGIT\n");
    }
    return 0;
}