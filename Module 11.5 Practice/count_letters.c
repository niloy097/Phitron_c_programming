#include<stdio.h>

int main()

{

    int c;
    int count[26]; //aaabbc
    while(scanf("%c", &c) != EOF)
    {
        int val = c - 97;
        count[val]++;
    }

    for(int i = 0; i < 26; i++)
    {
        printf("%c : %d\n", i+97, count[i]);
    }


    return 0;
}