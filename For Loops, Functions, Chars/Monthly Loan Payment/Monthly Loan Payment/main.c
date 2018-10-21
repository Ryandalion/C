// Function calculates the monthly payment and the total cost of the loan over x period of months

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

main()
{
	float interestRate, numPayments, loanAmount, payment, loanTotal = 0; // Variables that hold information pertaining to user's loan information

	printf("------------=LOAN PAYMENT CALCULATOR=---------\n");
	printf("Please enter the loan amount: ");
	scanf("%f", &loanAmount); // Amount of loan
	
	printf("\nPlease enter the monthly interest rate of the loan: ");
	scanf("%f", &interestRate); // Monthly interest rate of loan
	interestRate = interestRate / 100;

	printf("\nPlease enter the number of payments: ");
	scanf("%f", &numPayments); // Number of payments for the loan

	loanTotal = loanAmount + (loanAmount * interestRate * numPayments); // Calculates the overall cost of the loan 
	payment = loanAmount * ((interestRate * pow((1 + interestRate), numPayments)) / ((pow((1 + interestRate), numPayments)) - 1)); // Calculates the monthly payment amount given the user's loan information
 	
	// Display loan information
	printf("\n-----------------LOAN INFORMATION-------------\n");
	printf("Loan Amount:                               $%.2f\n", loanAmount);
	printf("Monthly Interest Rate:                     %.2f %%\n", interestRate);
	printf("Number of Payments:                        %.0f\n", numPayments);
	printf("Total Lifetime Loan Amount:                $%.2f\n", loanTotal);
	system("pause");
	return 0;
}