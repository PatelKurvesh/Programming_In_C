// takes nothing return somthing
// if we return somthing means we can not name funtion with void bcz void=null if we write int,float,str then it's fine.

#include<stdio.h>
void main()
{
    printf("hello\n");
    int c = add();
    printf("Your Sum :- %d",c);

}
int add()
{
    int a,b,c;
    printf("Enter the First value :- ",a);
    scanf("%d", &a);
    printf("Enter the Second value :- ",b);
    scanf("%d", &b);
    c=a+b;
    return c;
}