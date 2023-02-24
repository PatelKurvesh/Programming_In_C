//simple Calculatore program with function

#include<stdio.h>
void main()
{
    int a, b;
    printf("Enter the first value :- ", a);
    scanf("%d",&a);
    printf("Enter the first value :- ", b);
    scanf("%d",&b);
    sum(a,b);
    printf("\n");
    mul(a,b);
    printf("\n");
    div(a,b);
    printf("\n");
    sub(a,b);
    printf("\n");
    mod(a,b);

}
void sum(int a, int b)
{
    printf("Sum (+) :- %d", a+b);
}
void sub(int a, int b)
{
    printf("Sub (-) :- %d", a-b);
}
void mul(int a, int b)
{
    printf("mul (*) :- %d", a*b);
}
void div(int a, int b)
{
    printf("div (/) :- %d", a/b);
}
void mod(int a, int b)
{
    printf("mod (%) :- %d", a%b);
}