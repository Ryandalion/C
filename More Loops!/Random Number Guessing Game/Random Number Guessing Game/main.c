#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

main()
{
	srand(time(NULL));
	
	int randomNum = rand() % 100 + 1; // Generate a random number between 1 and 100
	int userNum = 0;
	int status = 1; // 1 is for true

	printf("Try to guess the random number\n");
	printf("If your guess is too high or too low I will let you know\n");
	printf("Please enter a number between 1 and 100: ");
	scanf("%d", &userNum);
	
	while (userNum < 1 || userNum > 100) // Input validation. User must enter a number between 1 and 100
	{
		printf("Please enter a number between 1 and 100\n");
		scanf("%d", &userNum);
	}
	 
	while (status == 1) // While loop keeps running until status is not equal to 1
	{
		if (userNum < randomNum) // User's number is less than the random number. We notify user that their number is too low
		{
			printf("The number is too low\n");
			printf("Enter your number: ");
			scanf("%d", &userNum);

			while (userNum < 1 || userNum > 100) // Input validation. 1-100 only
			{
				printf("Please enter a number between 1 and 100\n");
				scanf("%d", &userNum);
			}
		}

		else if (userNum > randomNum) // User's number is too high. We notify user that their number is too high
		{
			printf("The number is too high\n");
			printf("Enter your number: ");
			scanf("%d", &userNum);

			while (userNum < 1 || userNum > 100) // Input validation. 1-100 only
			{
				printf("Please enter a number between 1 and 100\n");
				scanf("%d", &userNum);
			}
		}

		else // User has guessed the correct number
		{
			status = 0; // Set status to 0 so we can exit while loop
			printf("You have guessed the correct number!\n"); // Congratulate user on their win
			printf("The number is %d", randomNum);
		}
	}

	printf("\n");
	system("pause");
	return 0;
}