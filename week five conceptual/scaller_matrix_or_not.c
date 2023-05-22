/*

4 0 0
0 4 0
0 0 4

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
    int flag = 1; //let us consider the matrix is scaller
    if(row != col)
    {
        flag = 0;
    }
    int first = arr[0][0];
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(i == j && arr[i][j] != first)
            {
                flag = 0;
                break;
            }
            else
            {
                if(i != j && arr[i][j] != 0)
                {
                    flag = 0;
                    break;
                }
            }
        }
    }

    if(flag == 1)
    {
        printf("Scalar\n");
    }
    else
    {
        printf("Not Scaler\n");
    }
    return 0;
}