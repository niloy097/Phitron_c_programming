#include<stdio.h>
#include<string.h>

int main()

{
    char str1[12], str2[12]; //abcd ef
    scanf("%s %s", &str1, &str2);
    int d1 = strlen(str1); // 4
    int d2 = strlen(str2); // 2
    printf("%d %d\n", d1, d2);
    char jora[25];
    for(int i = 0; i < d1; i ++)
    {
        jora[i] = str1[i];
    }
    for(int i = 0; i < d2; i++)
    {
        jora[i+d1] = str2[i];
    }

    for(int i = 0; i < d1+d2; i++)
    {
        printf("%c", jora[i]);
    }
    printf("\n");

    //swap jora
    int temp;
    temp = jora[0];
    jora[0] = jora[d1];
    jora[d1] = temp; 
    /*for(int i = 0; i < d1+d2; i++)
    {
        printf("%c", jora[i]);
    }*/
    for(int i = 0; i < d1; i++)
    {
        printf("%c", jora[i]);
    }
    printf(" ");
    for(int i = d1; i < d1 + d2; i++)
    {
        printf("%c", jora[i]);
    }
    printf("\n");
    
    return 0;
}

