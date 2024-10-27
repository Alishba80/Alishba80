#include <stdio.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int year;
	printf("Enter an year: ");
	scanf("%d", &year);
	if(year %4 == 0)
	{
		printf("This is a leap year", year);
	}
	else
	{
		printf("This is not a leap year", year);
	}
	getch();
	return 0;
}
