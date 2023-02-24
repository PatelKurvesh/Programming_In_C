//C Program To Find Area And Circumference Of Circle

#include<stdio.h>
void main()
{
    int r;
    float pi=3.14,c;
    printf("Enter the radius :- ",r);
    scanf("%d",&r);
    c=pi*r*r;
    printf("Area of circle :- %f",c);
}