// Program that determines how many calories are derived from fat. Program will ask user to enter the number of grams of fat in the food
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main()
{
	int calories, fatGrams;
	calories = fatGrams = 0;
	
	float calFat, fatPercent, lowFat;
	calFat = fatPercent = lowFat = 0;

	printf("Fat Gram Calculator\n");
	printf("Please enter the number of calories: ");
	scanf("%d", &calories);
	while (calories < 0)
	{
		printf("Calories cannot be negative. Please enter the number of calories: ");
		scanf("%d", calories);
	}
	
	printf("Please enter the number of fat grams: ");
	scanf("%d", &fatGrams);
	while (fatGrams < 0 || fatGrams > calories)
	{
		printf("Fat grams cannot be negative or exceed the number of calories. Please enter the number of fat grams: ");
		scanf("%d", fatGrams);
	}

	calFat = (fatGrams * 9); // Calories from fat
	fatPercent = (calFat / calories); // Percent of fat from calories
	lowFat = .30 * (calories / 100);


	if (fatPercent < lowFat)
	{
		printf("The food is low in fat\n");
	}	

	else
	{
		printf("The food is NOT low in fat\n");
	}

	system("pause");
	return 0;
}