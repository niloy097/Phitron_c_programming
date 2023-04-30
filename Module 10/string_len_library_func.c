#include<stdio.h>
#include<string.h>
int main()

{
    char str[1000];
    //scanf("%s", str); //without space input str
    gets(str);
    int len = strlen(str); //with space input str
    printf("String  Length is: %d", len);
    

    return 0;
}