#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
	int numStudents = 0; // Variable holds the number of students' names that will be entered
	char personName[256] = "";

	printf("Please enter the number of students (1 ~ 20) that will be lining up: ");
	scanf("%d", &numStudents);

	while (numStudents < 1 || numStudents > 20)
	{
		printf("Please enter a number between 1 and 20: ");
		scanf("%d", &numStudents);
	}

	printf("\nPlease enter student 1's name: "); // Get the name of the first student
	scanf("%s", &personName);

	size_t length = strlen(personName); // Prepare the variables first person and last person to be initialized to the first student's name

	char *firstPerson = malloc(length + 1); // Create an array for the first person 
	char *lastPerson = malloc(length + 1); // Create an array for the second person

	memcpy(firstPerson, personName, length + 1); // Copy the contents from the user input name into first person variable
	memcpy(lastPerson, personName, length + 1); // Copy the contents from the user input name into the last person variable
	
	memset(personName, 0, sizeof(personName)); // "Clear" the char array for next input

	for (int i = 2; i <= numStudents; i++) // Loop until we reach the number of students
	{
		printf("\nPlease enter student %d's name: ", i); // User enters student's name
		scanf("%s", &personName);

		if ((strcmp(personName, firstPerson) < 0)) // If student's name is less than first person's name then we intiailize the student to the new front of th eline 
		{
			for (int i = 0; i < strlen(firstPerson); i++) // Copy the elements from the student's name (personName) to firstPerson array. We don't need to clear the first person name because personName will overwrite the elements
			{
				firstPerson[i] = personName[i];
			}

			memset(personName, 0, sizeof(personName)); // Clear the personName array for next input
		}

		else if ((strcmp(personName, lastPerson) > 0)) // Student's name is greater than the current last student's name. As a result, we intiailize the new student to be the last person in line
		{
			for (int i = 0; i < strlen(lastPerson); i++) // Copy elements from the personName array to the last person name array
			{
				lastPerson[i] = personName[i];
			}
			memset(personName, 0, sizeof(personName)); // Clear the personName array for next input iteration
		}
		
	}

	printf("\nNames of Students\n"); // Print the name's of the student at the front of the line and the student at the back of the line
	printf("First person's name %s\n", firstPerson);
	printf("Last person's name %s\n", lastPerson);
	system("pause");
	return 0;
}