// Program that asks the user to enter their name, cellphone plan, and the minutes used. Program will then determine the user's bill and display the amount of savings they could get from switching plans
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void displayBill(char name[], char plan[], float bill);

main()
{
	int selection, minutes;
	selection = minutes = 0;
	float totalBill = 0;

	char name[256];

	float planA[] = { 39.99, 450, .45 };
	float planB[] = { 59.99, 900, .40 };
	float planC[] = { 69.99};

	printf("Please enter your name: ");
	fgets(name, sizeof(name), stdin);
	printf("\nPlease enter your cellphone plan\n");
	printf("1. Plan A\n");
	printf("2. Plan B\n");
	printf("3. Plan C\n");
	scanf("%d", &selection);

	while (selection != 1 && selection != 2 && selection != 3)
	{
		printf("Please enter a valid plan: ");
		scanf("%d", &selection);
	}

	printf("\nPlease enter the number of minutes used this month: ");
	scanf("%d", &minutes);
	while (minutes < 0)
	{
		printf("Minutes cannot be negative. Please enter the number of minutes used this month: ");
		scanf("%d", &minutes);
	}

	int totalMinutes, overCharge; // Variable to hold the amount of minutes allocated per each plan and the amount of minutes over allocated amount
	totalMinutes = overCharge = 0;

	float bill, savingsB, savingsC; // Variable to hold the final bill and the possible savings if plans are switched
	bill = savingsB = savingsC = 0;
	
	switch (selection)
	{
		case(1): // PLAN A
			totalMinutes = planA[1];
			char planTypeA[] = "Plan A";

			if (minutes > totalMinutes)
			{
				overCharge = minutes - totalMinutes;
				bill = overCharge * planA[2];
			}
			
			bill += planA[0];
			displayBill(name, planTypeA, bill);
			if (bill > planA[0])
			{
				savingsB = bill - planB[0];
				savingsC = bill - planC[0];
			}

			if (savingsB > 0 || savingsC > 0)
			{
				printf("You can save $%.2f by switching to plan B\n", savingsB);

				if (savingsC > 0)
				{
					printf("You can save $%.2f by switching to plan C\n", savingsC);
				}
			}


			break;
	
		case(2): // PLAN B
			totalMinutes = planB[1];
			char planTypeB[] = "Plan B";

			if (minutes > totalMinutes)
			{
				overCharge = minutes - totalMinutes;
				bill = overCharge * planB[2];
			}

			bill += planB[0];
			displayBill(name, planTypeB, bill);
			
			if (bill > planB[0])
			{
				savingsC = bill - planC[0];
			}

			if (savingsC > 0)
			{
				printf("You can save $%.2f by switching to plan C", savingsC);
			}
			break;

		case(3): // PLAN C
			bill = planC[0];
			char planTypeC[] = "Plan C";
			displayBill(name, planTypeC, bill);
			break;

		default:
			break;
	}

	printf("\n");

	system("pause");
	return 0;
}

void displayBill(char name[], char plan[], float bill)
{
	printf("\n----------FINAL BILL---------\n");
	printf("CUSTOMER NAME:           %s", name);
	printf("CUSTOMER PLAN:           %s\n", plan);
	printf("TOTAL DUE:               $%.2f\n", bill);
}