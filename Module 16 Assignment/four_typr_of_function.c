//Answer to the question no-4: 

#include<stdio.h>
//1. Has return + Parameter
int squre(int x);

//2. Has return + No Parameter
int add_two_number();

//3. No return + Parameter
void print_1_to_n(int n);

//4. No return + No Parameter
void display();

int main()

{
    //1.
    int x;
    printf("Enter a integer number: ");
    scanf("%d", &x);
    int a = squre(x);
    printf("Squre: %d\n", x);

    //2.
    int sum = add_two_number();
    printf("Sum of two number: %d\n", sum);
    
    //3.
    int number;
    printf("Enter a integer numbre: ");
    scanf("%d", &number);
    print_1_to_n(number);

    //4.
    printf("\n\nA mesaage-->\n");
    display();

    return 0;
}
int squre(int x)
{
    return x * x;
}
int add_two_number()
{
    int x, y;
    printf("Enter two integer number: ");
    scanf("%d %d", &x, &y);
    return x + y;
}
void print_1_to_n(int n)
{
    printf("The series: \n");
    for(int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
}
void display()
{
    printf("Hello Rahat Bhai\n");
}