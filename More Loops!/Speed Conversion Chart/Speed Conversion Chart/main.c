#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main()
{
	int kph = 40; // KPH is starting KPH value
	float mph = 0; // MPH will hold the KPH conversion
	int incrementValue = 10; // Increment the KPH by 10 per each loop iteartion. This will displays KPH as 10,20...50 etc

	printf("KPH                        MPH\n");
	printf("-------------------------------\n");

	for (int i = 0; i <= 8; i++)
	{
		mph = (kph * .6214); // Convert present KPH to MPH
		printf("%d                   %.2f\n", kph, mph); // Print the KPH on the left hand column and the MPH on the right hand column
		kph += incrementValue; // Increase the KPH variable by the increment value of 10
	}

	system("pause");
	return 0;
}