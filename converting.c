// CONVERTING MODULE SOURCE
/*
Author: Ron Austin Saguros, rsaguros1@myseneca.ca, 111045225, 31/07/2022, CPR101, Final Project V1
converting.c : CONVERTING
Purpose: This program converts integer numeric strings inputted by the user to an integer value.
*/

#define	_CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80

// Includes all the necessary functions from stdio.h, string.h, and stdlib.h needed to manipulate
// strings and convert a string to an integer value.
#include "converting.h"

// V1
void converting(void) {
	// Display beginning message
	printf("*** Start of Converting Strings to int Demo ***\n");

	// Declare variables
	char	intString[BUFFER_SIZE];
	int		intNumber;

	do {
		// Prompt user for entry
		printf("Type an int numeric string (q - to quit):\n");
		fgets(intString, BUFFER_SIZE, stdin);
		intString[strlen(intString) - 1] = '\0';

		// Check user input, exit if 'q' was entered.
		if (strcmp(intString, "q") != 0) {

			// Convert user entry from string to integer value.
			intNumber = atoi(intString);

			// Display converted number.
			printf("Converted number is %d\n", intNumber);
		}
	} while (strcmp(intString, "q") != 0);

	// Display ending message and exit module.
	printf("*** End of Converting Strings to int Demo ***\n\n");
}
