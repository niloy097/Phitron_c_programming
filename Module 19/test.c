/*

AcrOii
4

*/
#include<stdio.h>
#include<string.h>
int vowl_cnt(char str[], int i)
{
    if(str[i] == '\0')
    {
        return 0;
    }
    int cnt = vowl_cnt(str, i+1);
    if(str[i] >= 'A' && str[i] <= 'Z')
    {
        str[i] = str[i] + 32;
    }
    if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || 
    str[i] == 'u')
    {
        return cnt+1;
    }
    else
    {
        return cnt;
    }
}
int main()
{

    char str[100];
    scanf("%s", str);
    int cnt_vwl = vowl_cnt(str, 0);
    printf("%d\n", cnt_vwl);

    return 0;
}