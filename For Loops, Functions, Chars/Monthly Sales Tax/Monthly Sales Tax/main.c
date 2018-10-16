#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main()
{
	char month[256];
	int year = 0;
	float revenue = 0;
	float sales = 0;
	float countyTax = 0;
	float stateTax = 0;
	float totalTax = 0;

	printf("Sales Tax Database\n\n");
	printf("Please enter the month: ");
	fgets(month, sizeof month, stdin);
	printf("\nPlease enter the year: ");
	scanf("%f", &year);
	printf("\nPlease enter the total amount collected (including state and county tax): ");
	scanf("%f", &revenue);

	sales = (revenue / 1.06);
	countyTax = (sales * .02);
	stateTax = (sales * .04);
	totalTax = countyTax + stateTax;

	printf("\nMonth : %s\t%.2f", month, year);
	printf("\n--------------------------------\n");
	printf("Total Collected:         %.2f\n", revenue);
	printf("Sales:                   %.2f\n", sales);
	printf("County Sales Tax:        %.2f\n", countyTax);
	printf("State Sales Tax:         %.2f\n", stateTax);
	printf("Total Sales Tax:         %.2f\n", totalTax);

	system("pause");
	return 0;
}