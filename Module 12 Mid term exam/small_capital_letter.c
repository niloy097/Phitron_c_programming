#include<stdio.h>

int main()

{
    char str[1001];
    int count_lowercase_letter = 0;
    int count_upercase_letter = 0;
    scanf("%s", str);
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            count_upercase_letter++;
        }
        else
        {
            count_lowercase_letter++;
        }
    }

    printf("%d %d\n", count_upercase_letter, count_lowercase_letter);
    

    return 0;
}