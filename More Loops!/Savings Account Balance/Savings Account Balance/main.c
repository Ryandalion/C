#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main()
{

	float startingBalance, depositAmount, totalDeposits, withdrawAmount, totalWithdrawls, userBalance, interestRate, totalInterest, startBalance, endBalance, accountChange;
	startingBalance= depositAmount= totalDeposits= withdrawAmount= totalWithdrawls= userBalance= interestRate= totalInterest= startBalance= endBalance= accountChange = 0;

	printf("Savings Account Manager\n");
	printf("Enter the starting balance for the account: ");
	scanf("%f", &startingBalance);
	
	while (startingBalance < 0) // Validate that user start balance is not below zero
	{
		printf("Starting balance cannot be less than 0. Please enter the starting balance of the account: ");
		scanf("%f", &startingBalance);
	}

	userBalance += startingBalance; // Add the starting balance to the user's total balance

	printf("Please enter the annual interest rate for the account: ");
	scanf("%f", &interestRate);
	
	while (interestRate < 0) // Validate that the interest rate is greater than zero
	{
		printf("Interest Rate cannot be negative. Please enter the interest rate for the account: ");
		scanf("%f", &interestRate);
	}

	interestRate /= 100; // Turn the interest rate into a decimal
	interestRate /= 12; // Divide the interest rate by twelve to get the monthly interest rate

	for (int i = 1; i <= 3; i++) // Loop 3 times
	{
		printf("\nPlease enter the amount deposited into this account for month %d: ", i);
		scanf("%f", &depositAmount);

		startBalance = userBalance; // Set the starting balance for the month to the user's balance
		while (depositAmount < 0) // Validate that deposit amount is not below zero
		{
			printf("\nDeposit amount must be greater than 0. Please enter the amount deposited into this account for month %d: ", i);
			scanf("%f", &depositAmount);
		}

		totalDeposits += depositAmount; // Add deposit amount to total deposit amounts
		userBalance += depositAmount; // Add deposit amount to the user's balance
		
		printf("Please enter the total amount withdrawn from this account for month %d: ", i);
		scanf("%f", &withdrawAmount);

		while (withdrawAmount < 0 || withdrawAmount > userBalance) // Validate that user does not withdraw a negative amount or an amount that exceeds the user's balance
		{
			printf("Withdraw amount cannot be negative or greater than current balance\n");
			printf("Please enter the total amount withdrawn from this account for month %d: ", i);
			scanf("%f", &withdrawAmount);
		}

		totalWithdrawls += withdrawAmount; // Add withdraw amount to total withdraw amount
		userBalance -= withdrawAmount; // Deduct the withdraw amount from the user's account
		endBalance = userBalance; // Set end balance equal to user's balance
		accountChange = interestRate * ((startBalance + endBalance) * .5); // Get the interest amount which is starting balance + end balance divided by 2 multiplied by monthly interest rate
		userBalance += accountChange; // Add the interest made to the user's balance
		totalInterest += accountChange; // Add the interest to the total interest
		accountChange = 0; // Reset account change to zero

	}

	printf("\nSavings Account 3 Month Summary\n"); // Display savings information to user
	printf("--------------------------------\n");
	printf("Starting Balance:          $%.2f\n", startingBalance);
	printf("Total Deposits Made:       $%.2f\n", totalDeposits);
	printf("Total Withdrawls Made:     $%.2f\n", totalWithdrawls);
	printf("Total Interest Acquired:   $%.2f\n", totalInterest);
	printf("Final Balance:             $%.2f\n", userBalance);
	system("pause");
	return 0;
}