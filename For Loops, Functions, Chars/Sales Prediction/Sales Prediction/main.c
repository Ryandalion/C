#include <stdio.h>

main()
{

	float percentage = .58;
	int sales = 8300000;
	float profit = 0;

	profit = (sales + (sales * percentage));

	printf("The total projected annual profit given $8,300,000 in sales and a 58%% profit margin is $%.2f \n", profit);



	system("pause");
	return 0;
}