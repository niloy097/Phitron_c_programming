#include<stdio.h>
#include<string.h>

int main()

{

    char str1[100], str2[100];
    scanf("%s %s", &str1, &str2);
    for(int i = 0; i <= strlen(str2); i++)
    {
        str1[i] = str2[i];
    }

    /*int i = 0;
    while(str2[i] != '\0')
    {
        str1[i] = str2[i];
        i++;
    }*/

    //with buildin function-->
    /*strcpy(str1, str2);

    printf("%s %s", str1, str2);*/

    return 0;
}