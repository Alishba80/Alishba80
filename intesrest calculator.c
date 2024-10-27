#include <stdio.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
    float interest, principal, rate, time;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter interest rate (in percentage): ");
    scanf("%f", &rate);

    printf("Enter time year: ");
    scanf("%f", &time);

    interest = principal * rate * time;
    printf("interest: %.2f\n", interest);
    
	return 0;
}
