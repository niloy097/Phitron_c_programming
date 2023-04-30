#include<stdio.h>
#include<string.h>

int main()

{

    char str1[200], str2[100]; //niloy Khan
    scanf("%s %s", str1, str2);
    int k = strlen(str1);
    for(int i = 0; i <= strlen(str2); i++)
    {
        str1[k] = str2[i];
        k++;
    }
    printf("%s %s\n", str1,str2);
    



    return 0;
}