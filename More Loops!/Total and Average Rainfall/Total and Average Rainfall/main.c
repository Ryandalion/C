#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main()
{
	FILE *fp; // File Pointer used to open files
	
	fp = fopen("Rainfall.txt", "r"); // Open the rainfall.txt file that contains the information
	
	char firstMonth[256]; // Set aside memory for the first month's name
	char secondMonth[256]; // Set aside memory for the second month's name
	float rainData[4]; // Memory to hold the rain data
	float totalRainfall = 0; // Total rainfall is the sum of all four rainfall data
	float averageRainfall = 0;  //  Average rainfall is the total rainfall divided by 4

	fscanf(fp, "%s", firstMonth); // Store the first word in first month
	fscanf(fp, "%s", secondMonth); // Store the second word in second month
	fscanf(fp, "%f", &rainData[0]); // Store the rain data
	fscanf(fp, "%f", &rainData[1]);
	fscanf(fp, "%f", &rainData[2]);
	fscanf(fp, "%f", &rainData[3]);
	fclose(fp); // Close the file that is open

	for (int i = 0; i < 4; i++) // Compute the sum of all rainfall data to get total rainfall
	{
		totalRainfall += rainData[i];
	}

	averageRainfall = totalRainfall / 4; // Average rainfall is equal to the total rain fall divided by 4

	printf("\nDuring the months of %s - %s the total rainfall was %.2f inches and the average rainfall was %.2f inches\n", firstMonth, secondMonth, totalRainfall, averageRainfall);
	
	system("pause");
	return 0;
}