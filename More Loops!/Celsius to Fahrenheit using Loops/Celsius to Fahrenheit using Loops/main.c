#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main()
{
	int celsius = 0;
	float fahrenheit = 0;

	printf("Celsius                Fahrenheit\n");
	printf("---------------------------------\n");
	
	for (int i = 0; i < 30; i++)
	{
		fahrenheit = ((1.8 * celsius) + 32); // Conversion from celsius to fahrenheit
		printf("%d                       %.2f", celsius, fahrenheit); // Display celsius and it's corresponding fahrenheit value. Round to two decimal places
		printf("\n");
		celsius++; // Increment celsius to find the next fahrenheit value
	}

	system("pause");
	return 0;
}