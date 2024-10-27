#include <stdio.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int age;
	printf("Enter your age for vote:");
	scanf("%d", &age);
	if(age>=18)
	{
		printf("You are eligible for vote");
	}
	else
	{
		printf("You are not eligible for vote");
	}
	getch();
	return 0;
}
