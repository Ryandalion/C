// Function: Grabs movie sales data and calculates net profit and net loss

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main()
{
	float movieShare = .80;
	double boxRevenue = 0;
	double distPaid = 0;
	double netRevenue = 0;

	char movieName[256];
	int numAdults = 0;
	int numChildren = 0;
	int adultTicket = 10;
	int childTicket = 6;

	printf("Enter the name of the movie: ");
	fgets(movieName, sizeof movieName, stdin);
	printf("Enter the number of adult tickets sold: ");
	scanf("%d", &numAdults);
	printf("Enter the number of child tickets sold: "); 
	scanf("%d", &numChildren);

	boxRevenue = ((numAdults * adultTicket) + (numChildren * childTicket));
	distPaid = (boxRevenue - (boxRevenue * movieShare));
	netRevenue = (boxRevenue - distPaid);
	
	printf("\nMovie Revenue Data\n");
	printf("Movie Name:                        %s", movieName);
	printf("Adult Tickets Sold:                %d\n", numAdults);
	printf("Children Tickets Sold:             %d\n", numChildren);
	printf("Gross Box Office Revenue:          $%.2f\n", boxRevenue);
	printf("Amount Paid to Distributors:       $%.2f\n", distPaid);
	printf("Net Box Office Revenue:            $%.2f\n", netRevenue);

	system("pause");
	return 0;
}