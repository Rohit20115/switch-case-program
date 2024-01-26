#include<stdio.h>
main()
{

	int a;
	printf("Enter the month number:");
	scanf ("%d",&a);
	switch(a)
	{

 		case 1: printf(" January = 31days");
 		break;
 		
        case 2: printf("febuary =28/29days");
 		break;
 		
        case 3: printf("March=31DAYS ");
 		break;
 		
        case 4:printf("April=30days ");
 		break;
 		
        case 5: printf("May= 31 days");
 		break;
 		
        case 6: printf("June=30days ");
 		break;
 		
        case 7: printf("july =31days ");
 		break;
 		
        case 8: printf("August=31 days");
 		break;
 		
        case 9: printf("september = 30 days");
 		break;
 		
        case 10: printf("Octmber = 31 days ");
 		break;
 		
        case 11: printf("November = 30days ");
 		break;
 		
        case 12: printf("December = 31days ");
 		break;
 		
        default :
 		printf("Enter the correct month number ");

 	}
	
 }
