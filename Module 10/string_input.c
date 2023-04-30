#include<stdio.h>

int main()

{

    int str[6]; //should consider null character while declaring string size
    scanf("%s", &str);
    printf("%s\n", str);

    return 0;
}