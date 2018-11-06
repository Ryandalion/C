#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main()
{
	int sales = 0; // Variable that wil hold sales amount
	int storeSales[3] = {0}; // Variable that will store the sales data per each store
	int k = 0; // K is used as a counter for accessing storeSales array elements
	int incrementFactor = 0; // Increment factor is conversion from sales in 100s to it's stars

	printf("Sales Data\n");
	
	for (int i = 1; i <= 3; i++) // Loop 3 times to collect data from 3 stores
	{
		printf("Please enter the sales (rounded to the nearest $100) for store #%d: ", i);
		scanf("%d", &sales);
		
		if (sales < 100) // If the user enters a sales number below 100 we just round it up to 100
		{
			sales = 100;
		}

		storeSales[k] = sales; // Store the sales data for store i into the storeSales array at index k
		k++; // Increment k to prepare it for next input
	}

	printf("\nDaily Sales\n");
	printf("Each * represents $100\n");
	
	k = 0; 

	for (int i = 1; i <= 3; i++) // Print the graph function
	{
		incrementFactor = (storeSales[k] / 100); // Convert the sales data into their star conversion. Each $100 in sales is equivalent to 1 *
		printf("Store %d: ", i);
		for (int j = 0; j < incrementFactor; j++) // We will add the necessary stars per each store. The quantity of stars are determined via the incrementFactor variable
		{
			printf("*");
		}
		printf("\n");
		k++; // Increment k to access sales data in the next array cell
	}

	system("pause");
	return 0;
}