#include<stdio.h>
#include<string.h>

int main()

{

    char str[1001];
    char str_cpy[1001];
    scanf("%s", str);
    for(int i = 0; i < strlen(str); i++)
    {
        str_cpy[i] = str[i];
    }

    
    for(int i = 0; i <= strlen(str_cpy)/2; i++)
    {
        int temp;
        temp = str_cpy[i];
        str_cpy[i] = str_cpy[strlen(str) - 1 - i];
        str_cpy[strlen(str) - 1 - i] = temp;
    }

    // printf("%s", str_cpy);
    int count = 0;
    for(int i = 0; i < strlen(str); i++)
    {
        if(str_cpy[i] == str[i])
        {
            count++;
        }
        
    }
    if(count == strlen(str))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}