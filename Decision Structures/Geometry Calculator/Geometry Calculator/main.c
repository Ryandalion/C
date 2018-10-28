// Function that asks the user to select an option from the menu then executes the relevant function
#define _CRT_SECURE_NO_WARNINGS
#define PI 3.14159

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

main()
{
	bool running = false;
	while (!running)
	{
		int userOption = 0;

		printf("Geometry Calculator\n");
		printf("1. Calculate the Area of a Circle\n");
		printf("2. Calculate the Area of a Rectangle\n");
		printf("3. Calculate the Area of a Triangle\n");
		printf("4. Exit\n");
		scanf("%d", &userOption);

		switch (userOption)
		{
			case 1:
			{
				float radius = 0;
				float area = 0;
				printf("\nPlease enter the radius of the circle: ");
				scanf("%f", &radius);

				area = (PI * pow(radius, 2));
				printf("The area of the circle is %.2f\n\n", area);
				break;
			}

			case 2:
			{	
				float width, length, area;
				length = width = area = 0;
				printf("\nEnter the width of the rectangle: ");
				scanf("%f", &width);
				printf("\nEnter the length of the rectangle: ");
				scanf("%f", &length);

				area = (width * length);
				printf("\nThe area of the rectangle is %.2f\n\n", area);
				break;
			}

			case 3:
			{
				float base, height, area;
				base = height = area = 0;
				printf("\nEnter the base length of the triangle: ");
				scanf("%f", &base);
				printf("\nEnter the height of the triangle: ");
				scanf("%f", &height);
				area = ((base * height)/2);
				printf("\nThe area of the triangle is %.2f\n\n", area);
				break;
			}

			case 4:
			{
				running = true;
				break;
			}
		}
	}
	system("pause");
	return 0;
}