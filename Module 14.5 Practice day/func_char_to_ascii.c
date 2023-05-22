#include<stdio.h>
int char_to_ascii(char ch);
int main()

{

    char c;
    scanf("%c", &c);
    int x = char_to_ascii(c);
    printf("%d\n", x);

    return 0;
}

int char_to_ascii(char ch)
{
    int d = ch;
    return d;
}