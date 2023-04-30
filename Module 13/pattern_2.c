/*
n = 4, s = space

ssss*
sss***
ss*****
s*******
*********




*/

#include<stdio.h>

int main()

{

    int n, k = 1;
    scanf("%d", &n);
    int s = n-1;
    for(int i = 1; i <= n; i++)
    {
        for(int f = 1; f <= s; f++)
        {
            printf(" ");
        }
        
        for(int j = 1; j <= k; j++)
        {
            printf("*");
        }
        //line sesh
        s--;
        k+=2;
        printf("\n");
       
    }

    return 0;
}