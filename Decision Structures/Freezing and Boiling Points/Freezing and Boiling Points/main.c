// Program will ask user to enter a temperature and the program will return mediums that will freeze and mediums that will boil
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main()
{
	int temp = 0;

	char ethylFreeze[] = "Ethyl Alcohol will freeze at this temperature\n";
	char ethylBoil[] = "Ethyl Alcohol will boil at this temperature\n";

	char mercuryFreeze[] = "Mercury will freeze at this temperature\n";
	char mercuryBoil[] = "Mercury will boil at this temperature\n";

	char oxygenFreeze[] = "Oxygen will freeze at this temperature\n";
	char oxygenBoil[] = "Oxygen will boil at this temperature\n";

	char waterFreeze[] = "Water will freeze at this temperature\n";
	char waterBoil[] = "Water will boil at this temperature\n";

	printf("Please enter a temperature: ");
	scanf("%d", &temp);

	if (temp > 0)
	{
		if (temp >= 172 && temp < 212)
		{
			printf(ethylBoil);
		}

		else if (temp > 212 && temp < 676)
		{
			printf(ethylBoil);
			printf(waterBoil);
		}

		else if (temp >= 676)
		{
			printf(ethylBoil);
			printf(waterBoil);
			printf(mercuryBoil);
		}
	}

	else if (temp < 0)
	{
		if (temp > -38 && temp <= 32)
		{
			printf(waterFreeze);
		}	

		if (temp < -38 && temp > -173)
		{
			printf(waterFreeze);
			printf(mercuryFreeze);
		}

		else if (temp <= -173 && temp > -362)
		{
			printf(waterFreeze);
			printf(mercuryFreeze);
			printf(ethylFreeze);
		}

		else if (temp <= -362)
		{
			printf(waterFreeze);
			printf(mercuryFreeze);
			printf(ethylFreeze);
			printf(oxygenFreeze);
		}
	}
	system("pause");
	return 0;
}