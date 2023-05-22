//Answer to the question no-3:
#include<stdio.h>
int count_before_zero(int *arr, int size);
int main()

{

    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int nmbr_of_elnt_befr_0 = count_before_zero(arr, n);
    printf("%d\n", nmbr_of_elnt_befr_0);
    return 0;
}
int count_before_zero(int *arr, int size)
{
    int count = 0;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] != 0)
        {
            count++;
        }
        else
        {
            break;
        }
    }

    return count;
}