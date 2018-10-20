 // Function will generate a random number between 1 and 9 and calculate addition and retrieve the sum. It will ask the user to enter the answer and determine if the user is right or wrong
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

main()
{
	srand(time(NULL));

	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	int userAnswer = 0;
	num1 = rand() % 9 + 1;
	num2 = rand() % 9 + 1;
	sum = num1 + num2;

	printf("Please tell me the sum of these two numbers %d, %d \n", num1, num2);
	scanf("%d", &userAnswer);
	if (userAnswer == sum)
	{
		printf("Yes! That is correct! The sum is %d \n", sum);
	}

	else
		printf("That is the wrong answer. The sum of %d and %d is %d\n", num1, num2, sum);
	system("pause");
	return 0;
}