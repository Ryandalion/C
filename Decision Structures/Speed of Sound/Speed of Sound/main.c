// Program that calculates the speed of sound via 3 different mediums. The program will ask the user to enter the distance the sound will travel and calculates how long it will take within the user chosen medium
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int calculateDistance(int choice, int distance);

main()
{
	int decision, distance, travel;
	decision = distance = travel = 0;

	printf("The Speed of Sound\n");
	printf("Please select the medium you wish to calculate the speed of sound for\n");
	
	printf("1. Air\n");
	printf("2. Water\n");
	printf("3. Steel\n");
	scanf("%d", &decision);

	while (decision != 3 && decision != 2 && decision != 1)
	{
		printf("Please enter a valid option\n");
		scanf("%d", &decision);
	}

	switch (decision)
	{
		case(1): // Air - 1100 ft per second
			printf("Enter the amount of feet the sound will travel: ");
			scanf("%d", &distance);
			travel = calculateDistance(1, distance);
			printf("Under the medium of Air it will take %d seconds to travel the distance of %d feet", travel, distance);
			break;

		case(2): // Water - 4900 ft per second
			printf("Enter the amount of feet the sound will travel: ");
			scanf("%d", &distance);
			travel = calculateDistance(2, distance);
			printf("Under the medium of Water it will take %d seconds to travel the distance of %d feet", travel, distance);
			break;

		case(3): // Steel - 16400 ft per second
			printf("Enter the amount of feet the sound will travel: ");
			scanf("%d", &distance);
			travel = calculateDistance(3, distance);
			printf("Under the medium of Steel it will take %d seconds to travel the distance of %d feet", travel, distance);
			break;
	}
	
	printf("\n");
	system("pause");
	return 0;
}

int calculateDistance(int choice, int distance)
{
	int rate = 0;
	int travel = 0;

	switch (choice)
	{
		case(1):
			rate = 1100;
			break;
		case(2):
			rate = 4900;
			break;
		case(3):
			rate = 16400;
			break;
		default:
			break;
	}
	
	travel = distance * rate;

	return travel;
}