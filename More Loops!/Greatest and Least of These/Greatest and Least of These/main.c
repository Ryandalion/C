#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main()
{
	int userNum = 0; // Holds user input number
	int lowestNum = 0; // Holds the lowest input number
	int greatestNum = 0; // Holds the greatest input number

	printf("Program will determine the greatest and least number given your input\n");
	printf("Please enter as many numbers as you would like and enter -99 to signal when you are finished\n");
	printf("Enter your number: ");
	scanf("%d", &userNum);

	lowestNum = userNum; // Set lowest number to user input number
	greatestNum = userNum; // Set greatest number to user input number

	while (userNum != -99) // Loop until user enters the sentinel value -99
	{
		if (userNum < lowestNum) // If user number is less than lowest number re-assign lowest number to the user number
		{
			lowestNum = userNum;
		}

		else if (userNum > greatestNum)  // If user number is greater than the greatest number re-assign the greatest number to the user number
		{
			greatestNum = userNum;
		}

		printf("Enter your number: "); // Ask user to enter their number
		scanf("%d", &userNum);
	}

	printf("\nThe greatest number is %d and the lowest number is %d\n", greatestNum, lowestNum); // Print the greatest and lowest num

	system("pause");
	return 0;
}