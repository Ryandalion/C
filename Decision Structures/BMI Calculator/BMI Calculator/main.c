// Program that calculates a user's BMI and determines whether they are normal weight, obese, or under weight
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

main()
{
	float weight, height, bmi;
	weight = height = bmi = 0;

	printf("BMI CALCULATOR\n");

	printf("Please enter your weight: ");
	scanf("%f", &weight);

	printf("\nPlease enter your height in inches: ");
	scanf("%f", &height);

	bmi = (weight * (703 / (pow(height, 2))));

	printf("Your BMI is %.2f\n", bmi);

	if (bmi >= 18.5 && bmi <= 25)
	{
		printf("You are considered normal weight");
	}

	else if (bmi < 18.5)
	{
		printf("You are considered underweight");
	}

	else if (bmi > 25)
	{
		printf("You are considered overweight");
	}
	printf("\n");

	system("pause");
	return 0;
}