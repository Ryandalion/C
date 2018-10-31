// Function that determines the distance between the origin and end of a soundwave via the medium of various gases. The user will select the gas type medium and the number of seconds it took the sound to reach it's destination.
// The function will calculate the distance from origin to end
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int calculateDistance(int choice, int distance);

main()
{
	int choice, distance, total;
	choice = distance = total = 0;
	
	printf("The Speed of Sound via Gas\n");
	printf("Please select the gas medium\n");
	printf("1. Carbon Dioxide\n");
	printf("2. Air\n");
	printf("3. Helium \n");
	printf("4. Hydrogen \n");
	scanf("%d", &choice);
	
	while (choice != 1 && choice != 2 && choice != 3 && choice != 4)
	{
		printf("Please enter a valid option");
		scanf("%d", &choice);
	}

	printf("Please enter the number of seconds (0 - 30) it took for the sound to reach the destination:");
	scanf("%d", &distance);

	switch (choice)
	{
		case(1): // Carbon Dioxide - 258 meter/sec
			choice = 1;
			total = calculateDistance(choice, distance);
			break;

		case(2): // Air - 331.5 meter/sec
			choice = 2;
			total = calculateDistance(choice, distance);
			break;

		case(3): // Helium - 972 meter/sec
			choice = 3;
			total = calculateDistance(choice, distance);
			break;

		case(4): // Hydrogen - 1270 meter/sec
			choice = 4;
			total = calculateDistance(choice, distance);
			break;

		default:
			break;
	}

	printf("The total distance to the origin is %d meters\n", total);
	system("pause");
	return 0;
}

int calculateDistance(int choice, int distance)
{
	int factor, travelled;
	factor = travelled = 0;

	switch (choice)
	{
		case(1):
			factor = 258.0;
			break;

		case(2):
			factor = 331.5;
			break;

		case(3):
			factor = 972;
			break;

		case(4):
			factor = 1270;
			break;

		default:
			break;
	}

	return travelled = (distance * factor);
}