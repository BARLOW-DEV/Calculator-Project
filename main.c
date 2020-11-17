#include <stdio.h>
#include <string.h>
#include <stdbool.h>
/*
Cameron Matlock		Cole Schweisser		Aaron Barlow
CS 4273-5273
Scientic Calculator Project
*/

typedef struct PeriodicElement_struct
{
	int atomicNumber;
	char elementName[30];
	char chemicalSymbol[30];
	char elementClass[30];
	double atomicWeight;
	int electronsPerShell[7];
} PeriodicElement;

 

int main(void)
{
	
	char userKey;

	userKey = '-';




	while (userKey != 'q')
	{
		printf("\n\n\t\tWelcome to Scientific Calculator Plus...please enter an integer....");
		printf("\n\n\t\tPlease enter y to enter an integer or q to quit.\n");
		scanf(" %c", &userKey);



		if (userKey == 'y')
		{
		}

		else if (userKey == 'q')
		{
			printf("Quitting...");
		}
		else
		{
			printf("invalid command...");
		}




	}







	return 0;
}
