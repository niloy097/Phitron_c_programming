#include<stdio.h>
#include<string.h>

int main()

{

    char str[1000001];
    gets(str);
    int i = 0;
    char ch = '\\';
    while(str[i] != ch)
    {
        printf("%c", str[i]);
        i++;
    }

    return 0;
}