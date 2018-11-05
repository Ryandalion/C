#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main()
{
	float calorieBurn = 3.9; // Calorie burn rate per 4 minutes on treadmill
	float totalBurn = 3.9; // Total burn is the compounding sum of the calories burned as time advances
	int minutes = 5; // Set the first minutes to 5 and increment in five minute intervals

	for (int i = 1; i <= 6; i++)
	{
		printf("Calories burned after %d minutes is %.2f\n", minutes, totalBurn);
		totalBurn += calorieBurn; // Add calories burn rate (3.9/minute) to total burn
		minutes += 5; // Increase minutes by 5 per iteration.
	}
	system("pause");
	return 0;
}