#include<stdio.h>
#include<string.h>

int main()

{

    char str[1001];
    scanf("%s", str);
    int count[26] = {0};
    for(int i = 0; i < strlen(str); i++)
    {
        int value = str[i];
        count[value - 97]++;
    }
    for(char i = 'a'; i <= 'z'; i++)
    {
        printf("%c - %d\n", i, count[i-97]);
    }

    return 0;
}