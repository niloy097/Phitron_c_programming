#include<stdio.h>
int my_len(char *str);
int main()

{

    char str[100];
    gets(str);
    int string_length = my_len(str);
    printf("%d\n", string_length);

    return 0;
}
int my_len(char *str)
{
    int len = 0;
    
    for(int i = 0; str[i] != '\0'; i++)
    {
        len++;
        
    }
    
    return len;
}