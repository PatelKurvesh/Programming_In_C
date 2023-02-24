// takes somthing return somthing
#include<stdio.h>
void main()
{
    int a,b;
    printf("hello\n");
    
    printf("Enter the First value :- ",a);
    scanf("%d", &a);
    printf("Enter the Second value :- ",b);
    scanf("%d", &b);
    
    int c=add(a,b);
    printf("Sum :- %d",c);
    

}
int add(int a, int b)
{
    int c;
    c=a+b;
    return c;
}