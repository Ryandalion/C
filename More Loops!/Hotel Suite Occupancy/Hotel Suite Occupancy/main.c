#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main()
{
	int numRooms = 0; // Variable that holds the number of suites per each floor
	int occupancyData[6] = {0}; // Array that holds the number of suites per each floor
	int totalSuites = 120; // There are a total of 120 suites
	float suites_in_use = 0; // Suites in use will be the total of occupied suites
	float occupancyRate = 0; // Occupancy rate is suites in use divided by the total number of available suites
	int k = 0;

	printf("Hotel Suite Management System\n\n");

	for (int i = 10; i <= 16; i++) // Loop from 10 through 16 to collect data from floor 10 through 16 repsectively
	{
		if (i == 13) // Since hotels dont have floor 13, if we encounter 13 then we just continue and iterate to the next loop
		{
			continue;
		}

		else
		{
			printf("Please enter the number of occupied suites on floor %d: ", i);
			scanf("%d", &numRooms);

			while (numRooms < 1 || numRooms > 20) // User must enter a number of occupied suites between 1 and 20
			{
				printf("\nThe number of occupied suites must be between 1 and 20\n");
				printf("Please enter the number of occupied suites on floor %d: ", i);
				scanf("%d", &numRooms);
			}

			occupancyData[k] = numRooms; // Store the number of occupied suites into the array
			k++; // Increment k to move it to the next empty array cell
		}
	}

	for (int i = 0; i < 6; i++) // Calculate the sum of the suites in use
	{
		suites_in_use += occupancyData[i];
	}
	 
	occupancyRate = suites_in_use / totalSuites; // Occupancy rate is calculated as suites occupied divided by total number of available suites
	
	printf("\n          Hotel Suite Data\n\n"); // Display hotel data to user
	printf("Total Available Suites: %d\n", totalSuites);
	printf("Total Occupied Suites: %.0f\n", suites_in_use);
	printf("Total Occupancy Rate: %.2f\n", occupancyRate);
	system("pause");
	return 0;
}