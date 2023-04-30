#include<stdio.h>

int main()

{

    char str[1000];
    // scanf("%s", str);
    gets(str);
    int len = 0;
    int i = 0;
    while(str[i] != '\0')
    {
        len++;
        i++;
    }
    printf("Size of string is: %d\n", len);

    return 0;
}