#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main()
{
	int totalShares = 0;
	double stockPrice = 0;
	double soldPrice = 0;

	printf("Enter the total number of shares: ");
	scanf("%d", &totalShares);
	printf("Enter the price paid per one share: ");
	scanf("%d", &stockPrice);
	printf("Enter the sale price per one share: ");
	scanf("%d", &soldPrice);

	double totalPrice = (totalShares * stockPrice);
	double totalSale = (totalShares * soldPrice);
	double totalLoss = (totalPrice - totalSale);

	printf("The total price you paid for %d", totalShares);
	printf(" shares is $%d\n", totalPrice);
	printf("The total sale value is $%d\n", totalSale);
	printf("The total loss/gain is $%d\n", totalLoss);
	
	system("pause");
	return 0;
}