#include <stdio.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int even_number, odd_number, number;
	printf("Enter a number: ");
	scanf("%d", &number);
	if(number%2==0)
	{
		printf("The number %d is even", number);
	}
	else
	{
		printf("The number %d is odd", number);
	}
	getch();	
	return 0;
}
