#include<stdio.h>
main()
{
    
        int a,b;
        char c;

        printf("enter the first number : ");
        scanf("\n%d",&a);
        printf("enter your user choice : ");
        scanf("\n %c", &c);
        printf("enter the secund number : ");
        scanf("\n%d",&b);

        switch(c)
        {

                case '1' :
                printf("\n total = %d",a+b);
                break;
                case '2' :
                printf("\n total = %d",a-b);
                break;
                case '3' :
                printf("\n total = %d",a*b);
                break;
                case '4' :
                printf("\n total = %d",a/b);
                break;
                default:
                printf("your user choise is wrong");


        }
        
}