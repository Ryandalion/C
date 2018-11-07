#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main()
{
	printf("Prairieville Population Chart\n"); // Prairieville population chart
	int year[] = { 1910, 1930, 1950, 1970, 1990 }; // Create array to store the 5 years that have population data
	int population[5] = { 0 }; // Create an array of integers to hold 5 population data that will be extracted from text file
	int starLength[5] = { 0 }; // Store the length of each population
	int k = 0;

	FILE *fp; // Create file pointer
	fp = fopen("People.txt", "r"); // open the text file and read its contents

	for (int i = 0; i < 5; i++) // Loop through the text file and assign the values to their respective array cells
	{
		fscanf(fp, "%d", &population[i]);
	}

	fclose(fp); // Close the opened file

	for (int i = 0; i < 5; i++) // Store the length of stars in the starLength array. The size is calculated via population divided by 1000
	{
		starLength[i] = (population[i] / 1000);
	}

	printf("\nEach * represents 1000 people\n");
	printf("YEAR   POPULATION\n"); // Display the population and year to the user
	printf("-------------------\n");

	for (int i = 0; i < 5; i++) // Loop through the five years and print out their population size in the forms of *'s. Where each * is equal to 1000 people
	{
		printf("%d: ", year[i]); // Print out the year
		for (k = 0; k < starLength[i]; k++) // Print the number of stars that correspond to the year's population size
		{
			printf("*");
		}
		printf("\n");
	}

	system("pause");
	return 0;
}