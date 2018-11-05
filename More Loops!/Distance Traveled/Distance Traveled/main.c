#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main()
{
	int userSpeed = 0; // Variable that holds the user's input speed
	int numHours = 0; // Variable that holds the user's number of hours traveled
	int milesTraveled = 0; // Variable that holds the number of miles traveled
	int i = 1; // Start i at for display purposes such as printing the day's number
	int incrementFactor = 0;

	printf("Please enter the speed of the vehicle: "); // User enters the speed of their vehicle
	scanf("%d", &userSpeed);

	while (userSpeed <= 0) // Input validation check for user's speed. This checks to make sure that user's speed is greater than zero.
	{
		printf("Speed must be greater than zero\n");
		printf("Please enter the speed of the vehicle: ");
		scanf("%d", &userSpeed);
	}

	printf("\nPlease enter the total duration of the trip: "); // User enters the total duration time of their trip
	scanf("%d", &numHours);

	while (numHours <= 0) // If the duration time is less than 1 hour we ask the user to enter a time greater than zero
	{
		printf("Total duration time must be greater than zero");
		printf("\nPlease enter the total duration of the trip: ");
		scanf("%d", &numHours);
	}

	printf("Hour                  Miles Traveled\n");
	printf("------------------------------------\n");
 
	incrementFactor = userSpeed; // The variable incrementFactor holds the miles traveled per hour
	milesTraveled = incrementFactor; // Set the first hour to the miles traveled

	while(i <= numHours)
	{
		printf("%d                     %d", i, milesTraveled);
		i++; // Increment i
		milesTraveled += incrementFactor; // We continue to add the fixed speed to the miles traveled as i increases
		printf("\n");
	}

	system("pause");
	return 0;
}