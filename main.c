#include <stdio.h>
#include <string.h>
#include <stdbool.h>
/*
Cameron Matlock		Cole Schweisser		Aaron Barlow
CS 4273-5273
Scientic Calculator Project
*/

int BasicAddition(int num1, int num2){

	int x = num1;
	int y = num2;
	int answer = 0;

	answer = x + y;

	return answer;
}

int main(void)
{
	
	char userKey = '-';
	char a = '-';

	while (userKey != 'q')
	{
		printf("\n\nWelcome to Scientific Calculator Plus...please enter an integer....");
		printf("\n\nPlease enter y to perform calculations or q to quit.\n");
		scanf("%c", &userKey);
		a = getchar();


		if (userKey == 'y')
		{
			char userAction = '-';

			while (userAction != 'c') {

				int userInt1 = 0;
				int userInt2 = 0;
				int result = 0;

				printf("\n\nEnter the first integer\n");
				scanf(" %d", &userInt1);
				a = getchar();

				printf("\n\nFor addition enter +, to clear enter c\n");
				scanf(" %c", &userAction);
				a = getchar();

				if (userAction == '+') {
					
					while (userAction != 'c'){
					
						printf("\n\nEnter the second integer\n");
						scanf(" %d", &userInt2);
						a = getchar();

						result = BasicAddition(userInt1, userInt2);
						printf("\n\n%d", result);						

						while (userAction == '+') {
							printf("\n\nFor addition enter +, to clear enter c\n");
							scanf(" %c", &userAction);
							a = getchar();

							if (userAction == '+') {

								printf("\n\nEnter the second integer\n");
								scanf(" %d", &userInt2);
								a = getchar();

								result = BasicAddition(result, userInt2);
								printf("\n\n%d", result);

							}

							else if (userAction == 'c') {
								break;
							}
							
						}
					}
					
				}


			}
		
		
		}

		else if (userKey == 'q')
		{
			printf("\n\nQuitting...");
		}
		else
		{
			printf("\n\ninvalid command...");
		}




	}







	return 0;
}
