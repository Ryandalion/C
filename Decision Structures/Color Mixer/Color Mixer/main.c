// Function asks the user to enter two paint colors and the program will output the color that is a result of the mix between the two
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

bool checkString(char color[], int *choice);

main()
{
	char color_1[256];
	char color_2[256];

	bool color1pass = false;
	bool color2pass = false;
	
	int *selection;
	int choice = 0;
	selection = &choice;

	printf("Please enter two colors that you wish to mix");
	printf("\nRed, Blue, and Yellow\n");
	
	printf("Type in your first selection: ");
	fgets(color_1, sizeof(color_1), stdin);
	color1pass = checkString(color_1, selection);
	int choice1 = *selection;

	printf("Type in your second selection: ");
	fgets(color_2, sizeof(color_2), stdin);
	color2pass = checkString(color_2, selection);
	int choice2 = *selection;

	if (color1pass && color2pass)
	{
		printf("You have chosen the color %sand the color %s", color_1, color_2);

		if (choice1 == 1 && choice2 == 2 || choice1 == 2 && choice2 == 1)
		{
			printf("The mixed color is purple");
		}

		else if (choice1 == 2 && choice2 == 3 || choice1 == 3 && choice2 == 2)
		{
			printf("The mixed color is orange");
		}

		else if (choice1 == 1 && choice2 == 3 || choice1 == 3 && choice2 == 1)
		{
			printf("The mixed color is green");
		}

		printf("\n");
		
	}

	else
		printf("You have entered one or more invalid colors\n");

	system("pause");
	return 0;
}

bool checkString(char color[], int *selection)
{
	bool status = false;
	size_t arraySize = strlen(color);
	arraySize -= 1;
	char blue[] = {"blue"};
	size_t blueArray = strlen(blue);

	char red[] = {"red"};
	size_t redArray = strlen(red);

	char yellow[] = {"yellow"};
	size_t yellowArray = strlen(yellow);

	for (int i = 0; i < arraySize; i++)
	{
		color[i] = tolower(color[i]);
	}
	
	
	if (arraySize == blueArray)
	{
		int counter = 0;
		for (int i = 0; i < arraySize; i++)
		{
			if (color[i] == blue[i])
			{
				counter++;
			}
		}

		if (counter == 4)
		{
			status = true;
			*selection = 1;
		} 

		else
			status = false;
	
	}

	else if (arraySize == redArray)
	{
		int counter = 0;
		for (int i = 0; i < arraySize; i++)
		{
			if (color[i] == red[i])
			{
				counter++;
			}
		}

		if (counter == 3)
		{
			status = true;
			*selection = 2;
		}

		else
			status = false;
	}

	else if (arraySize == yellowArray)
	{
		int counter = 0;

		for (int i = 0; i < arraySize; i++)
		{
			if (color[i] == yellow[i])
			{
				counter++;
			}
		}

		if (counter == 6)
		{
			status = true;
			*selection = 3;
		}

		else
			status = false;
	}

	return status;
}