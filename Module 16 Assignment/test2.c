#include<stdio.h>
#include<string.h>
int s(char str[])
{
    return strlen(str);
}
int main()

{

    char str[] = "Niloy";
    int len = s(str);
    printf("%d", len);
    return 0;
}