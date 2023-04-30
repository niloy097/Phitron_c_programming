/*#include<stdio.h>

int main()

{

    int a[5] = {34, 65, 64, 34, 24}; //0, 1, 2, 3, 4
    int b[2] = {12, 13}; // 0, 1

    int c[5+2];
    for(int i = 0; i < 5; i++)
    {
        c[i] = a[i];
    }
    for(int j = 0; j < 2; j++)
    {
        c[5+j] = b[j]; 
    }

    for(int i = 0; i < 7; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}*/

#include<stdio.h>

int main()

{

    int m;
    scanf("%d", &m);
    int a1[m];
    for(int i = 0; i < m; i++)
    {
        scanf("%d", &a1[i]);

    }

    int n;
    scanf("%d", &n);
    int a2[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a2[i]);
    }
    int a3[m+n];

    for(int i = 0; i < m; i++)
    {
        a3[i] = a1[i];
    }
    for(int j = 0; j < n; j++)
    {
        a3[m+j] = a2[j];
    }

    for(int i = 0; i < (m+n); i++)
    {
        printf("%d ", a3[i]);
    }


    return 0;
}