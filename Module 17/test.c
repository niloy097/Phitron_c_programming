#include<stdio.h>
#include<stdlib.h>
void fun(int arr[], int n, int i)
{
    if(i == n)
    {
        return;
    }
    printf("%d ", arr[i]);
    fun(arr, n, i+1);

}
int main()

{

    int n;
    scanf("%d", &n);
    int *arr = (int *) malloc (n * sizeof(int));

    fun(arr, n, 0);

    return 0;
}