// takes nothing return nothing
// bcz return nothing and function takes nothing

#include<stdio.h>
void main()
{
    printf("Hello\n");
    add();
}
void add()
{
    int a,b,c;
    printf("Enter the First value :- ",a);
    scanf("%d", &a);
    printf("Enter the Second value :- ",b);
    scanf("%d", &b);
    c=a+b;
    printf("Your Sum :- %d",c);
}