#include<stdio.h>
//not solved
int main()

{

    int n;
    scanf("%d", &n);
    int a[26] = {0};
    for(int i = 0; i < n; i++)
    {
        char ch;
        scanf(" %c", &ch);
        int val = ch - 'a';
        a[val]++;
        
    }
    for(int i = 0; i < 26; i++)
    {
        if(a[i] != 0)
        {
            for(int j = 1; j <= a[i]; j++)
            {
                printf("%c", i+97);
            }
        }
    }
    return 0;
}