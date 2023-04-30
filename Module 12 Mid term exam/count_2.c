#include<stdio.h>
#include<string.h>

int main()

{

    char str[1001];
    int cnt_vowel = 0;
    scanf("%s", str);
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            cnt_vowel++;
        }
        i++;
    }

    printf("%d\n", cnt_vowel);

    return 0;
}