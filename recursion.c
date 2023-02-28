

#include<stdio.h>
void main()
{
    int k;
    k=sum(10);
    printf("%d",k);

}
int sum(int a)
{
    int s;
    if(a==1)
    return(1);
    s=a+sum(a-1);
    return(s);
}