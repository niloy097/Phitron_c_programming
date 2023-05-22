#include<stdio.h>
#include<string.h>
int main()

{

    char str[1002];
    fgets(str, 1002, stdin);
    int cap = 0;
    int sml = 0;
    int spc = 0;
    for(int i = 0; i < strlen(str); i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            cap++;
        }
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            sml++;
        }
        if(str[i] == ' ')
        {
            spc++;
        }
    }
    printf("Capital - %d\n", cap);
    printf("Small - %d\n", sml);
    printf("Spaces - %d\n", spc);
    return 0;
}