#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main()
{
	float inflationRate = 0; // Variable that holds the user input inflation rate
	float projectedAmount = 0; // Variable that holds the projected amount per the respective year
	float fixedAmount = 1000.00; // Starting value of 1000 

	printf("How much is $1,000 worth over 10 Years?\n");
	printf("Please enter an inflation rate between 1%% - 10%% : ");
	scanf("%f", &inflationRate);

	while (inflationRate < 1 || inflationRate > 10) // Check user input and validate that input is greater than 1 and less than 10
	{
		printf("Please enter an inflation rate between 1% - 10% : ");
		scanf("%f", &inflationRate);
	}

	inflationRate /= 100; // Convert inflation rate to it's decimal form

	printf("\n10 Year Inflation Rate Projection\n");
	printf("---------------------------------\n");
	printf("YEAR                      Value of $1000\n");
	
	for (int i = 1; i <= 10; i++) // Loop through ten times to show the value of $1000 over a ten year period
	{
		projectedAmount = fixedAmount;
		printf("%d                            %.2f\n", i, projectedAmount);
		fixedAmount -= (fixedAmount * inflationRate); // Update fixed amount by applying the inflation rate per each iteration
	}
	
	system("pause");
	return 0;
}