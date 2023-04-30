/*

initiationg zero on every element of array-->
int arr[7] = {0};
    for(int i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }

*/


#include<stdio.h>

int main()

{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int count[7] = {0};
    for(int i = 0; i < n; i++)
    {
       
       int val = arr[i];
       count[val]++;
       
       
       
       
       /* if(arr[i] == 10)
        {
            count[10]++;
        }
        if(arr[i] == 5)
        {
            count[5]++;
        }
        if(arr[i] == 0)
        {
            count[0]++;
        }*/
    }

    /*printf("0- %d\n", count[0]);
    printf("1- %d\n", count[1]);
    printf("2- %d\n", count[2]);
    printf("3- %d\n", count[3]);
    printf("4- %d\n", count[4]);
    printf("5- %d\n", count[5]);*/

    for(int i = 0; i <=6; i++)
    {
        printf("%d - %d\n", i, count[i]);
    }

    return 0;
}



/*

#include<stdio.h>

int main()

{

    int arr[] = {5, 1, 19, 9, 11, 2, 3, 5, 1, 1};
    int size = sizeof(arr)/sizeof(int);
    int cnt[7] = {0};
    for(int i = 0; i < size; i++)
    {
        int val = arr[i];
        cnt[val]++;
    }
    for(int i = 0; i < 7; i++)
    {
        printf("%d = %d\n",i,  cnt[i]);
    }

    return 0;
}


*/