#include<stdio.h>
#include<string.h>
int main()

{

    char str[1001], str_c[1001];
    scanf("%s", str);
    strcpy(str_c, str);
    //printf("%s", str_c);
    // printf("%d", strlen(str_c));
    int i = 0;
    int j = strlen(str_c) - 1;
    while(i < j)
    {
        int temp = str_c[j];
        str_c[j] = str_c[i];
        str_c[i] = temp;

        i++;
        j--;
    }
    //printf("%s", str_c);
    int d = strcmp(str_c, str);
    if(d == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}