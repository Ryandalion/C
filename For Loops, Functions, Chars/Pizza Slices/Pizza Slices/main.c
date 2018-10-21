#define _CRT_SECURE_NO_WARNINGS
#define PI 3.145
#define SLICE_AREA 14.125
#define PER_PERSON 4

#include <stdio.h>
#include <math.h>


main()
{
	float diameter, radius, numSlices, areaPizza, numGuests, numPizzas = 0;
	
	printf("---------------PIZZA SLICE ORDER MANAGER-------------\n");
	printf("Please enter the diameter of the pizzas:  ");
	scanf("%f", &diameter);
	printf("\nPlease enter the number of guests: ");
	scanf("%f", &numGuests);

	radius = diameter / 2;
	areaPizza = PI * (pow(radius, 2));
	numSlices = (areaPizza/SLICE_AREA);
	numPizzas = (10 * PER_PERSON)/(numSlices);

	printf("\nBased on our calculations, the average consumer eats 4 slices of pizza.\n");
	printf("We suggest that you order %.0f pizzas for %.0f number of guests\n", numPizzas, numGuests);


	system("pause");
	return 0;
}