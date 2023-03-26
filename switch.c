// calculator using switch case

#include<stdio.h>
void main()
{
    int choice,a,b,c;
    while (1)
    {
        
    
    printf("\n");
    printf("\n1.Add\n");
    printf("2.Sub\n");
    printf("3.Mul\n");
    printf("4.Div\n");
    printf("5.Odd-Even\n");
    printf("6.Exit\n");
    printf("Enter your choice :-");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        // int a,b,c;
        printf("Enter the first value :- ",a);
        scanf("%d",&a); 
        printf("Enter the Second value :- ",b);
        scanf("%d",&b);
        c=a+b;
        printf("Your Addition :- %d",c);
        break;
    case 2:
        // int a,b,c;
        printf("Enter the first value :- ",a);
        scanf("%d",&a); 
        printf("Enter the Second value :- ",b);
        scanf("%d",&b);
        c=a-b;
        printf("Your Sub :- %d",c);
        break;
    case 3:
        // int a,b,c;
        printf("Enter the first value :- ",a);
        scanf("%d",&a); 
        printf("Enter the Second value :- ",b);
        scanf("%d",&b);
        c=a*b;
        printf("Your Mul :- %d",c);
        break;
    case 4:
        // int a,b,c;
        printf("Enter the First value :- ",a);
        scanf("%d",&a); 
        printf("Enter the Second value :- ",b);
        scanf("%d",&b);
         if ((a==0) || (b==0)){
            printf("Zero not allowed");
            break;
        }else{
            printf("Enter the Second value :- ",b);
            scanf("%d",&b);
        }
        c=a/b;
       
        printf("Your Div :- %d",c);
        break;
    case 5:
        // int a;
        printf("Enter the value :- ",a);
        scanf("%d",&a);
        if(a%2==0){
            printf("Even");
        }
        else{
            printf("Odd");
        }
        break;
    case 6:exit(0);
    default:
        printf("Invalid choice");
    }

    
    
    }
    
    

}