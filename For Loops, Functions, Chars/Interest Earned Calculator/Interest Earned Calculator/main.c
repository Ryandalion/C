// Function that calculates the interest earned on a prinicpal amount deposited into a savings account
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

main()
{
	float principal = 0;
	float finalBalance = 0;
	float time = 0;
	float interestAccrued = 0;
	float interestRate = 0;
	float interestDisplay = 0;

	printf("\nPlease enter the principal amount: ");
	scanf("%f", &principal);
	printf("\nPlease enter the interest rate: ");
	scanf("%f", &interestRate);
	printf("\nPlease enter the number of times the interest in compounded: ");
	scanf("%f", &time);

	interestDisplay = interestRate;
	interestRate = (interestRate / 100);

	// Two following functions calculate interest amount and final balance
	interestAccrued = (principal * interestRate); // Calculate the accrued interest amount
	finalBalance = principal *(pow((1 + (interestRate / time)), time)); // Principal * ( 1 + rate/time)^time

	printf("fINAl BALANCe : %f\n", finalBalance);
	
	printf("-----------------SAVINGS ACCOUNT INFORMATION---------------\n");
	printf("Interest Rate:                                              %.2f %%\n", interestDisplay);
	printf("Times Compounded:                                           %.0f\n", time);
	printf("Principal:                                                  $%.2f\n", principal);
	printf("Interest:                                                   $%.2f\n", interestAccrued);
	printf("Final Balance:                                              $%.2f\n", finalBalance);

	system("pause");
	return 0;

}