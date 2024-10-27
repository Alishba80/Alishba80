#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int Fe, IS, DM, FP, CF, obtain_marks;
	printf("Enter your Fe marks: ");
	scanf("%d", &Fe);
	
	printf("Enter your IS marks: ");
	scanf("%d", &IS);
	
	printf("Enter your DM marks: ");
	scanf("%d", &DM);
	
	printf("Enter your FP marks: ");
	scanf("%d", &FP);
	
	printf("Enter your CF marks: ");
	scanf("%d", &CF);
	
	obtain_marks=Fe+IS+DM+FP+CF;
	 
	float percentage=(obtain_marks*100/500);
	printf("percentage:%f\n", percentage);
	
	if (percentage>=80)
	{
		printf("Grade: A+");
    }
	else if (percentage>=70)
	{	
		printf("Grade: A");
    }
    else if (percentage>=60)
	{	
		printf("Grade: B");
    }
    else if (percentage>=50)
	{	
		printf("Grade: C");
    }
    else
	{	
		printf("Grade: Fail");
    }
	getch();
	return 0;
}
