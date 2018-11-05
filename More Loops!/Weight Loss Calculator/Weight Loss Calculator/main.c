#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main()
{
	float userWeight = 0; // Variable that holds the user's starting weight
	int weightLoss= 4; // The amount of pounds that can be lost if the user cuts 500 calories/day from their diet 

	printf("Weight Loss Predictor\n");
	printf("Cutting 400 calories/day can result in an average of 4 lbs lost per month\n\n");
	printf("Please enter your weight: ");
	scanf("%f", &userWeight);
	
	while (userWeight < 0) // Check user input. Weight cannot be negative.
	{
		printf("Weight cannot be negative. Please enter your weight: ");
		scanf("%f", &userWeight);
	}

	printf("MONTH                    WEIGHT\n");
	printf("-----------------------------\n");

	for (int i = 1; i <= 6; i++) // Show the first six months of predicted weight loss
	{
		userWeight -= weightLoss; // Subtract the user's weight by 4 per each iteration
		printf("%d                        %.2f\n", i, userWeight);
	}

	system("pause");
	return 0;
}