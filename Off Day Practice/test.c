#include<stdio.h>

int main(){
    int test;
    scanf("%d",&test);
    for(int i=1;i<=test;i++){
        int n;
        scanf("%d",&n);
        int a[n];
        for(int j=0;j<n;j++){
            scanf("%d",&a[j]);
        }
        int count_odd=0;
        int count_even=0;
        for(int k=0;k<n;k++){
            if(a[k]%2!=0){
                count_odd++;
            }
            else if(a[k]%2==0){
                count_even++;
            }
        }
        if((count_even+count_odd)%2==0){
            if(count_even==count_odd){
                printf("0\n");
            }
            else if(count_even!=count_odd){
                if(count_even>count_odd){
                    printf("%d\n",(count_even-count_odd)/2);
                }
                else if(count_even<count_odd){
                    printf("%d\n",(count_odd-count_even)/2);
                }
            }
        }
        else{
            printf("-1\n");
        }
    }
    return 0;
}