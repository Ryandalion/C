#define _CRT_SECURE_NO_WARNINGS
#define STOCK_COMISSION .02
#include <stdio.h>
#include <math.h>

main()
{
	float numShares, sharePrice, shareSale, numSold, balance = 0;
	float comissionBuy, comissionSale = 0;
	float totalBuy = 0;
	float totalSell = 0;
	float totalBalance = 0;

	printf("Please enter the number of shares you purchased: ");
	scanf("%f", &numShares);
	printf("\nPlease enter the price per share: ");
	scanf("%f", &sharePrice);
	printf("\nPlease enter the number of shares you sold: ");
	scanf("%f", &numSold);
	printf("\nPlease enter the sale price per share: ");
	scanf("%f", &shareSale);

	comissionBuy = (numShares * sharePrice) * STOCK_COMISSION;
	comissionSale = (numSold * shareSale) * STOCK_COMISSION;
	 
	totalBuy = (numShares * sharePrice);
	totalSell = (numSold * shareSale);
	totalBalance = totalSell - totalBuy - (comissionBuy + comissionSale);
	printf("\n----------------STOCK SALE INFORMATION---------------");
	printf("\nNumber of Shares Purchased:                    %.2f", numShares);
	printf("\nPrice per share (BUY):                         $%.2f", sharePrice);
	printf("\nComission Fee (PURCHASE):                      $%.2f", comissionBuy);
	printf("\nNumber of Shares Sold:                         %.2f", numSold);
	printf("\nPrice per share (SALE):                        $%.2f", shareSale);
	printf("\nComssion Fee (SALE):                           $%.2f", comissionSale);
	printf("\nTotal Gain/Loss:                               $%.2f\n", totalBalance);

	system("pause");
	return 0;
};