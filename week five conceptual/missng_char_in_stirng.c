#include<stdio.h>
#include<string.h>
int main()
{
    char str[10], ch1, ch2, ch3; //abcd abd
    scanf("%s %c %c %c", str, &ch1, &ch2, &ch3);
    for(int i = 0; i < strlen(str); i++)
    {
        if(str[i] == ch1 || str[i] == ch2 || str[i] == ch3)
        {
            continue;
        }
        else
        {
            printf("%c ", str[i]);
        }
    }

    return 0;
}