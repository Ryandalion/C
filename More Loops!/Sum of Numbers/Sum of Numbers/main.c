#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main()
{
	int userNum = 0; // Variable that holds the number of values they wish to sum
	int sum = 0; // Variable that holds the total sum of all values

	printf("Please enter the number of numeric inputs you wish to find the sum for: ");
	scanf("%d", &userNum);
	
	while (userNum < 1) // If user enters a number less than zero, we execute this while loop to inform user that input should be greater than zero.
	{
		printf("Number cannot be negative.\n");
		printf("Please enter a number greater than zero: ");
		scanf("%d", &userNum);
	}

	int i = userNum; // Initialize the variable i to the user's num. In the following do-while loop we will add the user's num to the sum and decrement the value of i until i < 0
	
	do
	{
		sum += i; // Add i to the sum variable
		i--; // Decrement i

	} while (i > 0); // Keep looping until i is less than zero

	printf("\nThe sum of %d is %d\n", userNum, sum); // Print the total sum given the user's input
	system("pause");
	return 0;
}