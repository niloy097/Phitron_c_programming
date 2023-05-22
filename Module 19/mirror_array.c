
/*

2 3 5
7 9 20
35 1 12

5 3 2 
20 9 7 
12 1 35 



*/

#include<stdio.h>

int main()

{

    int row, col;
    scanf("%d %d", &row, &col);
    int arr[row][col];
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i = 0; i < row; i ++)
    {
        for(int j = col - 1; j >= 0; j--)
        {
            printf("%d ", arr[i][j]); 
        }
        printf("\n");
    }
    return 0;
}