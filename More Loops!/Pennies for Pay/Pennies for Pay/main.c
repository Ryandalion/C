#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main()
{
	int numDays = 0; // Number of days the user worked
	int salary = 1; // Starting salary for the first day is one penny
	float conversion = 0; // Convert the total penny amount at the end of the pay period and convert to dollars

	printf("Penny Salary Calculator\n");
	printf("Please enter the number of days worked: ");
	scanf("%d", &numDays);

	while (numDays < 1 || numDays > 31) // While loop checks that user has entered a valid number of days for a month period
	{
		printf("\nPlease enter a number between 1 and 31: ");
		scanf("%d", &numDays);
	}

	printf("DAY                 SALARY\n");
	printf("--------------------------\n");
	
	for (int i = 1; i <= numDays; i++) // Loop until we reach the number of days the user wishes to calculate the salary for
	{
		salary *= 2; // Multiply the salary by 2 per each iteration
		printf("%d                    %d\n", i, salary);
	}

	conversion = salary * .01; // Convert the salary to a dollar amount by multiplying it by .01

	printf("The total salary in dollars is $%.2f\n", conversion); // Display the final dollar amount to the user

	system("pause");
	return 0;
}