#include<stdio.h>
#include<conio.h>

void main()
{
	char grade;
	float score;
	
	printf("Enter the score: ");
	scanf("%f",&score);
	
//	Q1
	grade=(score>=90)? 'A':
		  (score>=75)? 'B':
		  (score>=60)? 'C':
		  (score>=45)? 'D':
		  (score>=35)? 'E': 'F'; 
		  
		  printf("Your Grade  is %c. ",grade);
		
//		Q2  
		switch(grade) 
		{
        case 'A':
            printf("Excellent work!");
            break;
        case 'B':
            printf("Well done.");
            break;
        case 'C':
            printf("Good job.");
            break;
        case 'D':
            printf("You passed, but you could do better.");
            break;
        case 'E':
            printf("Try more hard to gain more grades.");
            break;    
        case 'F':
            printf("Sorry, you failed.");
            break;
        default:
            printf("Invalid grade.");
            break;
    }
    
//    Q3
    if (grade >= 'A' && grade <= 'D') 
	{
        printf("Congratulations! You are eligible for the next level.");
    } 
	else if (grade == 'F') 
	{
        printf("Please try again next time.");
    }

		  
	getch();
}
