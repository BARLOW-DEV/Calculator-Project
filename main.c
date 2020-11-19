#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/*
Cameron Matlock        Cole Schweisser        Aaron Barlow
CS 4273-5273
Scientic Calculator Project
*/

double basicAddition(double num1, double num2){

    double x = num1;
    double y = num2;
    double answer = 0.0;

    answer = x + y;

    return answer;
}

double basicSubtraction( double num1, double num2) {
    double answer = 0.0;
    answer = num1 - num2;

    return answer;
}

double basicMultiplication(double num1, double num2) {
    double answer = 0.0;
    answer = num1 * num2;

    return answer;
}

double basicDivision(double num1, double num2) {
    double answer = 0.0;
    if (num2 == 0.0) {
        return -1;
    } else {
        answer = num1/num2;
        return answer;
    }
}

void printMenu(void) {
    printf("For addition enter +, to clear enter c\n");
    printf("For subtraction enter -, to clear enter c\n");
    printf("For multiplication enter *, to clear enter c\n");
    printf("For division enter /, to clear enter c\n");
    printf("Press = for total.\n");
}

double doMath(char userAction, double userInt1, double result) {
    switch(userAction) {
        case '+' :
                result = basicAddition(userInt1, result);
            break;
                 
        case '-' :
                result = basicSubtraction(userInt1, result);
            break;
        
        case '*' :
                result = basicMultiplication(userInt1, result);
            break;
            
        case '/' :
                result = basicDivision(userInt1, result);
            break;
            
        case '=' :
            printf("Total: %lf\n\n\n", result);
            break;
            
        case 'c' :
            result = 0.0;
            
        default :
            printf("Incorrect action. Enter correct command (+ - * /):\n");
            }
    return result;
}

int main(void)
{
    double userInt1 = 0.0;
    double result = 0.0;
    char userKey = '-';
    char userAction = '-';
    char previousUserAction = '-';

    printf("\n\nWelcome to Scientific Calculator Plus...please enter an integer....");
    printf("\n\nPlease enter y to perform calculations or q to quit.\n");
    scanf("%c", &userKey);
    getchar();
    
    while (userKey != 'q') {
        while (userAction != 'q') {
            if (userKey == 'y') {
                printf("\n\nEnter number:\n");
                scanf(" %lf", &userInt1);
                getchar();
                printMenu();
                scanf(" %c", &userAction);
                getchar();
                if (userAction == '=') {
                    result = doMath(previousUserAction, userInt1, result);
                    result = doMath(userAction, userInt1, result);
                    printMenu();
                    scanf(" %c", &userAction);
                    getchar();
                    continue;
                } else if (userAction == 'c') {
                    userInt1 = 0.0;
                    continue;
                }
                result = doMath(userAction, userInt1, result);
                previousUserAction = userAction;
            }
        }
        scanf("%c", &userKey);
        getchar();
    }
    return 0;
}

