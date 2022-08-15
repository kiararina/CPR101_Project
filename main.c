// MAIN 
/*
Author: BB01, 03/08/2022, CPR101, Final Project V3
main.c : MAIN
Purpose: Main Function used to prompt user for which various options.
*/

// Include all necessary modules
#define _CRT_SECURE_NO_WARNINGS
#include "fundamentals.h"
#include "manipulating.h"
#include "converting.h"
#include "tokenizing.h"

int main(void) {
	// Declare variables
	char buff[10];

	// Open menu for user
	do {
		// Display menu options
		printf("1 - Fundamentals\n");
		printf("2 - Manipulation\n");
		printf("3 - Converting\n");
		printf("4 - Tokenizing\n");
		printf("0 - Exit\n");
		
		// Prompt user for input
		printf("Which module to run? \n");
		fgets(buff, 10, stdin);

		// Analyze user entry and match selection
		switch (buff[0])
		{
		case '1': 
			// Call for fundamentals module
			fundamentals();
			break;

		case '2': 
			// Call for manipulating module
			manipulating();
			break;

		case '3': 
			// Call for converting module
			converting();
			break;

		case '4': 
			// Call for tokenizing module
			tokenizing();
			break;
		}
	} while (buff[0] != '0');
	
	return 0;
}