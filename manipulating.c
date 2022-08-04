/*
Author: Kiara Rina Pelenio, krpelenio@myseneca.ca, #12636121, 08/01/2022, CPR101, Final Project
manipulating.c : Manipulating
Purpose: This program manipulates input strings
*/

#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80

#include "manipulating.h" 
/* Contains function prototypes and library declarations */

void manipulating(void) {
/* Purpose: This function concatenates 2 input strings */

	printf("*** Start of Concatenating Strings Demo ***\n");
	char string1[BUFFER_SIZE];
	char string2[BUFFER_SIZE];

	do {
		printf("Type the 1st string (q - to quit):\n");
		fgets(string1, BUFFER_SIZE, stdin);
		string1[strlen(string1) - 1] = '\0';	// Replace trailing '\n' witn string null terminator

		if ((strcmp(string1, "q") != 0)) {		// If the input is not equal to "quit"
			printf("Type the 2nd string:\n");
			fgets(string2, BUFFER_SIZE, stdin);
			strcat(string1, string2);
			printf("Concatenated string is \'%s\'\n", string1);
		}
	} while (strcmp(string1, "q") != 0);		// Repeat input as long as input is not equal to "quit"

	printf("*** End of Concatenating Strings Demo ***\n");
}