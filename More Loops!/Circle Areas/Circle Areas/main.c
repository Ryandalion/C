#define _CRT_SECURE_NO_WARNINGS
#define PI 3.14159

#include <stdio.h>
#include <math.h>

main()
{
	int radius = 1; // Radius variable holds the starting radius
	float area = 0; // Area will hold the computed area given radius and PI

	printf("RADIUS                AREA\n");
	printf("--------------------------\n");

	for (int i = 0; i < 8; i++) // Loop through 8 times to display how much area quadruples per each iteration due to doubling of radius
	{
		area = (PI) * (pow(radius, 2)); // Area formula for a circle
		printf("%d                     %.2f\n", radius, area); // Display the radius and the corresponding area
		radius *= 2; // Multiply the radius by two per each iteration as to "double" the radius which should correspond two 4x area of circle per iteration
	}

	system("pause");
	return 0;
}