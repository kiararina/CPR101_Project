// CONVERTING MODULE SOURCE
/*
Author: Ron Austin Saguros, rsaguros1@myseneca.ca, 111045225, 12/08/2022, CPR101, Final Project V3
converting.c : CONVERTING
Purpose: This program converts numeric strings inputted by the user to an integer value, a double value, and a long value.
*/

#define	_CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80

// Includes all the necessary functions from stdio.h, string.h, and stdlib.h needed to manipulate
// strings and convert a string to an integer, a double, and a long value.
#include "converting.h"

void converting(void) {
	// V1
	// Display beginning message
	printf("*** Start of Converting Strings to int Demo ***\n");

	// Declare variables
	char	intString[BUFFER_SIZE];
	int		intNumber;

	do {
		// Prompt user for a integer numeric string
		printf("Type an int numeric string (q - to quit):\n");
		fgets(intString, BUFFER_SIZE, stdin);
		intString[strlen(intString) - 1] = '\0';	// Replace new line with null terminator

		// Check user input, exit if 'q' was entered.
		if (strcmp(intString, "q") != 0) {

			// Convert user entry from string to integer value.
			intNumber = atoi(intString);

			// Display converted number.
			printf("Converted number is %d\n", intNumber);
		}
	} while (strcmp(intString, "q") != 0);

	// Display ending message for int demo
	printf("*** End of Converting Strings to int Demo ***\n\n");

	// V2
	printf("*** Start of Converting Strings to double Demo ***\n");

	char	doubleString[BUFFER_SIZE];
	double	doubleNumber;

	do {
		// Prompt user for a double numeric string, replacing the new line read by 
		// fgets with a null terminator
		printf("Type an double numeric string (q - to quit):\n");
		fgets(doubleString, BUFFER_SIZE, stdin);
		doubleString[strlen(doubleString) - 1] = '\0';

		// Check user input, exit if 'q' was entered.  
		if ((strcmp(doubleString, "q") != 0)) {

			// Convert user entry from numeric string to a double, then display it
			doubleNumber = atof(doubleString);
			printf("Converted number is %f\n", doubleNumber);
		}
	} while (strcmp(doubleString, "q") != 0);

	// Display ending message for double demo
	printf("*** End of Converting Strings to double Demo ***\n\n");

	// V3
	printf("*** Start of Converting Strings to long Demo ***\n");
	
	char	longString[BUFFER_SIZE];
	long	longNumber;

	do {
		// Prompt user for a long numeric string, replacing the new line read by
		// fgets with a null terminator.
		printf("Type a long numeric string (q - to quit):\n");
		fgets(longString, BUFFER_SIZE, stdin);
		longString[strlen(longString) - 1] = '\0';

		// Check user input, exit if 'q' was entered.
		if ((strcmp(longString, "q") != 0)) {

			// Convert user entry from numeric string to a long, then display it
			longNumber = atol(longString);
			printf("Converted number is %ld\n", longNumber);
		}
	} while (strcmp(longString, "q") != 0);

	// Display ending message for long demo
	printf("*** End of Converting Strings to long Demo ***\n\n");
}
