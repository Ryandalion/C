#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main()
{
	float currentRate = 3000; // Current annual membership fee
	float increaseRate = .03; // Rate at which annual fee is going to grow

	printf("Country Club - Projected Annual Fees\n");
	
	printf("YEAR            ANNUAL FEE\n");
	for (int i = 1; i <= 5; i++) // Loop 5 times to show a 5 year projection of estimated annual fees
	{
		printf("%d                $%.2f\n", i, currentRate);
		currentRate += (currentRate * increaseRate); // Multiply current rate by .03
	}

	system("pause");
	return 0;
}