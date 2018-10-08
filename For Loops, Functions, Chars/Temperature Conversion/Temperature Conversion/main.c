#include <stdlib.h>
#include <stdio.h>


main()
{
	float fahr, cels; // Float to hold fahrenheit and celsius
	int lowerlimit = 0; // Lower limit bound
	int upperlimit = 300; // Upper limit bound
	int step = 20; // Print in intervals of twenty

	fahr = lowerlimit; // Set fahr to lowerlimit
	printf("Temperature Conversion Table\n\n");
	printf("Fahrenheit to Celsius\n");
	fahr = upperlimit;
	while (fahr >= lowerlimit) // Loop while fahrenheit is lower than or equal toupper limit 
	{
		cels = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0f        %6.1f\n", fahr, cels);

		fahr = fahr - step;
	}

	cels = 0; // Reset cels to zero
	printf("\n");
	cels = upperlimit;
	printf("Celsius to Fahrenheit\n"); // Print Celsius to fahrenheit conversion
	while (cels >= lowerlimit)
	{
		fahr = ((9.0/5.0) * (cels)) + (32);
		printf("%6.1f        %3.0f\n", cels, fahr);

		cels = cels - step;
	}

	system("pause");
	return 0;
}