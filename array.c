// find the average of 10 numbers

#include<stdio.h>
void main()
{
    int a[10],sum,i;
    float avg;
    printf("enter the 10 numbers :-");
    
    for(i=0;i<=9;i++)
        // printf("enter the %d numbers :-",i);
        scanf("%d",&a[i]);

    for(i=0;i<=9;i++)
        sum=sum+a[i];
    
    avg=sum/10.0;
    printf("avg is :- %f",avg);
}