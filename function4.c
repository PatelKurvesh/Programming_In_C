// takes somthing return nothing

#include<stdio.h>
void main()
{
    int a,b;
    printf("hello\n");
    
    printf("Enter the First value :- ",a);
    scanf("%d", &a);
    printf("Enter the Second value :- ",b);
    scanf("%d", &b);
    add(a,b);
}
void add(int x, int y)
{
    int c;
    c=x+y;
    printf("Sum :- %d",c);
}