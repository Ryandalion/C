#define _CRT_SECURE_NO_WARNNGS
#include <stdio.h>

main()
{
	int i = 32; // Starting ASCII character value
	int newline = 0; // Variable that creates a new line once 16 characters are printed on a new line

	do {
		if (newline == 16) // If there are sixteen characters we start a new line 
		{
			printf("\n");
			newline = 0;
		}

		printf("%c", i); // Print a char via the integer
		printf(" ");
		i++; // Increment i to advance to next character
		newline++; // Increment the number of characters per each loop. Once newline equals 16 we will create a new line

	} while (i <= 127); // Loop is finished when the last character's ASCII code is reached

	printf("\n");
	system("pause");
	return 0;
}