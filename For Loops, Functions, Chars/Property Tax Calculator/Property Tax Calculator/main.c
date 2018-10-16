#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main()
{
	float propertyValue = 0;
	float propertyTax = 0;
	float taxAmount = 0;
	float assessedPrice = 0;

	printf("Property Tax Calculator\n");
	printf("Enter the property value: ");
	scanf("%f", &propertyValue);
	printf("Enter the property tax rate (per $100): ");
	scanf("%f", &propertyTax);
	propertyTax = (propertyTax / 100);
	assessedPrice = ((propertyValue * .60));
	taxAmount = ((assessedPrice * propertyTax));

	printf("The total tax amount due for your property is $%.2f\n", taxAmount);


	
	system("pause");
	return 0;
}