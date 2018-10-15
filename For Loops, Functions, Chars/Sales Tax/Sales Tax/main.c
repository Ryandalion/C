#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


main()
{
	double itemPrice = 0;
	double stateTax = 0;
	double countyTax = 0;
	
	double stateTotal = 0;
	double countyTotal = 0;
	double totalPrice = 0;

	printf("Please enter the price of the item: ");
	scanf("%lf", &itemPrice);
	printf("Please enter the state tax rate: ");
	scanf("%lf", &stateTax);
	stateTax = (stateTax / 100);
	printf("Please enter the county tax rate: ");
	scanf("%lf", &countyTax);
	countyTax = (countyTax / 100);
	
	stateTotal = (itemPrice + (itemPrice * stateTax));
	countyTotal = (itemPrice + (itemPrice * countyTax));
	totalPrice = (itemPrice + (itemPrice * stateTax) + (itemPrice * countyTax));

	printf("The price of the item before tax is: $%.2f\n", itemPrice);
	printf("The price of the item after state tax is: $%.2f\n", stateTotal);
	printf("The price of the item after county tax is: $%.2f\n", countyTotal);
	printf("The total price including state and county tax is: $%.2f\n", totalPrice);

	system("pause");
	return 0;
}