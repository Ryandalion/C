#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main()
{
	float startingNum = 0; // Variable that holds the starting organism population
	float increaseRate = 0; // Variable that holds the growth rate of the population per day
	float population = 0; // Variable that holds the population of the organism
	int numDays = 0; // Variable that holds the number of days the user wishes to calculate the population for

	printf("Enter the starting number of organisms: ");
	scanf("%f", &startingNum);
	
	while (startingNum < 2) // User must enter a starting organism number of at least 2 or else we execute the while loop
	{
		printf("\nThe starting number of organisms must be greater than or equal to 2\n");
		printf("Enter the starting number of organisms: ");
		scanf("%f", &startingNum);
	}

	printf("\nEnter the rate at which the population grows: ");
	scanf("%f", &increaseRate);

	while (increaseRate < 1) // Rate of growth must be greater than 1
	{
		printf("\nThe population growth rate must be greater than zero\n");
		printf("Enter the rate at which the population grows: ");
		scanf("%f", &increaseRate);
	}

	printf("\nEnter the number of days you wish to calculate population grow: ");
	scanf("%d", &numDays);

	while (numDays < 0) // Number of days must be greater than zero
	{
		printf("\nThe number of days must be greater than zero\n");
		printf("Enter the number of days you wish to calculate population grow: ");
		scanf("%d", &numDays);
	}

	increaseRate /= 100; // Convert the growth rate to a decimal for conversion purposes
	population = startingNum + (startingNum * increaseRate); // Initialize population
	printf("\nDay                   Population\n");
	for (int i = 1; i <= numDays; i++) // Loop until user number of days is reached
	{
		printf("%d                      %.3f\n", i, population);
		population += (population * increaseRate); // Increase population rate by growth rate
	}

	system("pause");
	return 0;
}