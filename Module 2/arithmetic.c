#include<stdio.h>

int main()

{

    int a, b;
    a = 3, b = 20;
    int sum =  a + b;
    int mns =  b - a;
    float dv = b*1.0 / a; //integer (+ - * / ) integer ==  result integer
    int mod = b % a;
    printf("%d\n", sum);
    printf("%d\n", mns);
    printf("%f\n", dv);
    printf("%d\n", mod);

    return 0;
}