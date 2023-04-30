//Concept for 'sum of two val equal x'
//Array er shob gula value er sathey shob gula value comparison er khetre this technique is very effective
/*#include<stdio.h>

int main()

{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            printf("%d %d\n", i, j);
        }
    }

    

    return 0;
}*/


#include<stdio.h>

int main()

{

    int n; //5
    scanf("%d", &n);
    int arr[n]; // 3 5 2 5 6
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int x; // 11
    scanf("%d", &x);
    int flag = 0;
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] + arr[j] == x)
            {
                flag = 1;
            }
        }
    }
    if(flag == 0)
    {
        printf("FALSE\n");
    }
    else
    {
        printf("TRUE\n");
    }


    return 0;
}