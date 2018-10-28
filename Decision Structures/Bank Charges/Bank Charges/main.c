// This function will ask the user the number of checks they have written and calculate the surcharges based on the volume of checks
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define fixedCharge 15

main()
{
	int numChecks = 0;
	float amountDue = 0;

	printf("Please enter the number of checks you have written this month: ");
	scanf("%d", &numChecks);
	
	if (numChecks < 20) // 10 cent surcharge 
	{
		amountDue = fixedCharge + (numChecks * .10);
	}

	else if (numChecks <= 39 && numChecks >= 20) // 8 cent surcharge
	{
		amountDue = fixedCharge + (numChecks * .08);
	}

	else if (numChecks >= 40 && numChecks <= 59) // 6 cent surcharge
	{
		amountDue = fixedCharge + (numChecks * .06);
	}

	else if (numChecks > 60) // 4 cent surcharge
	{
		amountDue = fixedCharge + (numChecks * .04);
	}

	printf("The total amount due for %d checks is $%.2f\n", numChecks, amountDue);

	system("pause");
	return 0;
}