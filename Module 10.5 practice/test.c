#include<stdio.h>
#include<string.h>

int main()

{
    char str[100];
    gets(str);
    for(int i = 0; i < strlen(str); i++)
    {
        int temp;
        str[i] = str[strlen(str)-1-i];
        str[strlen(str)-1-i] = temp;
    }
    

    return 0;
}