//character array counting-->
#include<stdio.h>
#include<string.h>

int main()

{

    char str[100]; //niiloyy
    scanf("%s", str);
    int count[26] = {0};
    for(int i = 0; i < strlen(str); i++)
    {
        int val = str[i] - 97;
        count[val]++;
    }

    printf("Display-1:\n");
    for(int i = 0; i < 26; i++)
    {
        printf("%c - %d\n", i+97, count[i]);
    }

    printf("\n\nDisplay-2: \n");
    for(int i = 0; i < 26; i++)
    {
        if(count[i] != 0)
        {
            printf("%c - %d\n", i+97, count[i]);
        }
    }

    printf("\n\nDisplay-3: \n");
    for(int i = 0; i<strlen(str); i++) //nniloyyy
    {
        
        int val = str[i];
        if(count[val - 97] != 0)
        {
            printf("%c - %d\n", val, count[val - 97]);
        }
        count[val-97]=0;
    }

    return 0;
}