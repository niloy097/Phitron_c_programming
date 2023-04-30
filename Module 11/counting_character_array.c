#include<stdio.h>
#include<string.h>

int main()

{

    
    char str[1000];
    scanf("%s", str); //programming
    int count[26] = {0};
    for(int i = 0; i < strlen(str); i++)
    {
        int val = str[i] - 97;
        count[val]++;
    }

    //Displaying cases-->
    //1. Want to count a to z
    printf("Display-1:\n");
    for(int i = 0; i < 26; i++)
    {
        printf("%c - %d\n", i+97, count[i]);
    }

    //2. Want to count those character who are in present at string-->
    printf("\n\n\nDisplay-2:\n");
    for(int i = 0; i < 26; i++)
    {
        if(count[i] != 0)
        {
            printf("%c - %d\n", i+97, count[i]);
        }
    }

    //3. Want to cout those words form inputed string-->
    printf("\n\n\nDisplay-3:\n");
    for(int i = 0; i < strlen(str); i++) //niliioyy
    {
        int val = str[i];
        printf("%c - %d\n", val, count[val - 97]);
        // printf("%c", val);
    }

    //4. Want to cout those words form inputed string but repeatative charter will be diasphay 1 time-->
    printf("\n\nDisplay-4: \n");
    
    for(int i = 0; i < strlen(str); i++)
    {   
        int val = str[i];
        if(count[val - 97] != 0)
        {
            printf("%c - %d\n", val, count[val - 97]);
        }
        count[val - 97] = 0;
    }
    

    return 0;
}