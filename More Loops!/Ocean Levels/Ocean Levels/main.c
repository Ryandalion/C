#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main()
{
	float increaseRate = 3.1; // Fixed rate at which ocean sea levels rise
	float totalIncrease = increaseRate; // Variable to hold the total sea level for a year
	int year = 1; // Start at year 1
	printf("Table shows the annual increase in ocean sea levels\n\n");
	printf("YEAR                            Total mm\n");
	printf("----------------------------------------\n");

	for (int i = 0; i < 20; i++) // Display the year and total mm sea level rise since year 1
	{
		printf("%d                                %.2f\n", year, totalIncrease);
		totalIncrease += increaseRate; // Increase the total increase rate by adding the fixed 3.1 rate
		year++; // Increment to the next year
	}

	system("pause");
	return 0;
}