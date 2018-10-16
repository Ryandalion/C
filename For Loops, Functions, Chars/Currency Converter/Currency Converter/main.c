#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main()
{
	const double YEN_PER_DOLLAR = 112.16;
	const double EUROS_PER_DOLLAR = .86;

	double number = 0;
	double convertYen = 0;
	double convertEuro = 0;

	printf("Please enter the amount of USD you wish to convert: ");
	scanf("%ld", &number);
	
	convertYen = (YEN_PER_DOLLAR * number);
	convertEuro = (EUROS_PER_DOLLAR * number);

	printf("Here are the conversion rates\n\n");
	printf("US DOLLAR CONVERT AMOUNT:      %d US dollars\n", number);
	printf("USD/YEN        =               %d yen\n", convertYen);
	printf("USD/EURO       =               %d euros\n", convertEuro);

	system("pause");
	return 0;
}