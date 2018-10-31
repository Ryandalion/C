// Function will ask user to input the race times for three individuals. The program will sort through the times and display them in order from fastest to slowest
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

main()
{
	char runner_1_name[256];
	char runner_2_name[256];
	char runner_3_name[256];

	char *firstPlace = NULL;
	char *secondPlace = NULL;
	char *thirdPlace = NULL;

	int runner_1_time, runner_2_time, runner_3_time;
	runner_1_time = runner_2_time = runner_3_time = 0;

	printf("Please enter the name for runner 1: ");
	scanf("%s", &runner_1_name);
	printf("\nPlease enter the time for runner 1: ");
	scanf("%d", &runner_1_time);

	printf("\nPlease enter the name for runner 2: ");
	scanf("%s", &runner_2_name);	
	printf("\nPlease enter the time for runner 2: ");
	scanf("%d", &runner_2_time);

	printf("\nPlease enter the name for runner 3: ");
	scanf("%s", &runner_3_name);	
	printf("\nPlease enter the time for runner 3: ");
	scanf("%d", &runner_3_time);

	int first, second, third;
	first = second = third = 0;

	if (runner_1_time > runner_2_time)
	{
		first = runner_2_time;
		firstPlace = &runner_2_name;
		third = runner_1_time;
		thirdPlace = &runner_1_name;
		if (runner_2_time > runner_3_time)
		{
			first = runner_3_time;
			firstPlace = &runner_3_name;
			second = runner_2_time;
			secondPlace = &runner_2_name;
		}

		else if (runner_3_time > runner_2_time)
		{
			first = runner_2_time;
			firstPlace = &runner_2_name;
			second = runner_3_time;
			secondPlace = &runner_3_name;
			if (runner_3_time > runner_1_time)
			{
				third = runner_3_time;
				thirdPlace = &runner_3_name;
				second = runner_1_time;
				secondPlace = &runner_1_name;
			}
		}
	}

	else if (runner_2_time > runner_1_time)
	{
		first = runner_1_time;
		firstPlace = &runner_1_name;
		third = runner_2_time;
		thirdPlace = &runner_2_name;
		if (runner_1_time > runner_3_time)
		{
			second = runner_1_time;
			secondPlace = &runner_1_name;
			first = runner_3_time;
			firstPlace = &runner_3_name;
		}
		else if(runner_3_time > runner_1_time)
		{
			second = runner_3_time;
			secondPlace = &runner_3_name;
			first = runner_1_time;
			firstPlace = &runner_1_name;
			if (runner_3_time > runner_2_time)
			{
				third = runner_3_time;
				thirdPlace = &runner_3_name;
				second = runner_2_time;
				secondPlace = &runner_2_name;
			}
		}
	}

	else if (runner_1_time == runner_2_time || runner_1_time == runner_3_time || runner_2_time == runner_3_time)
	{
		printf("Two or more runners have the same time");
	}

	printf("\nRESULTS\n");
	printf("1st Place: %5s           Time: %5d\n", firstPlace, first);
	printf("2nd Place: %5s           Time: %5d\n", secondPlace, second);
	printf("3rd Place: %5s           Time: %5d\n", thirdPlace, third);

	system("pause");
	return 0;

}