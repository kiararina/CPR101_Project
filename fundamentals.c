/*
Author: Arshjot Singh, asingh1185@myseneca.ca, #164126211, 02/08/2022, CPR101, Final Project V1
fundamentals.c : indexing
Purpose: Takes non-empty string and a number as input and gives the character at that number(index) as output.
*/


// FUNDAMENTALS MODULE SOURCE 
#define _CRT_SECURE_NO_WARNINGS 
#define BUFFER_SIZE 80
#define NUM_INPUT_SIZE 10 
#include "fundamentals.h"

void fundamentals(void) {
// V1
    printf("*** start of Indexing Strings Demo ***\n"); 
    char buffer1[BUFFER_SIZE]; 
    char numInput[NUM_INPUT_SIZE]; 
    size_t position; 
    do {
        printf("Type not empty string (q - to quit): \n"); 
        fgets (buffer1, BUFFER_SIZE, stdin); 
        buffer1[strlen (buffer1) - 1] = '\0'; // Replaces user entered newline with null terminator

        // checks if entered string is not equals to 'q'.
        if (strcmp (buffer1, "q") != 0) { 
            printf("Type the character position within the string: \n"); 
            fgets (numInput, NUM_INPUT_SIZE, stdin); 
            numInput[strlen (numInput) - 1] = '\0'; // Replaces user entered newline with null terminator
            position = atoi (numInput); // Converts entered string to integer.

            // Checks if converted integer is larger then string length and assigns max position if true.
            if (position >= strlen (buffer1)) { 
                position = strlen (buffer1) - 1; 
                printf("Too big... Position reduced to max. availbale\n");
            }
            printf("The character found at %d position is '%c\'\n",(int)position, buffer1[position]);
        }
    } while (strcmp (buffer1, "q") != 0); //Loops till user enters 'q'
    printf("*** End of Indexing Strings Demo ***\n\n");

    // V2 
    printf("*** Start of Measuring Strings Demo ***\n"); 
    char buffer2[BUFFER_SIZE]; 
    do { 
        printf("Type a string (q - to quit):\n"); 
        fgets(buffer2, BUFFER_SIZE, stdin); //Gets the user entered string
        buffer2[strlen(buffer2) - 1] = '\0'; // Replaces user entered newline with null terminator 

        // checks if entered string is not equals to 'q'.
        if (strcmp(buffer2, "q") != 0) 
            printf("The length of \'%s\' is %d characters\n", 
            buffer2, (int)strlen(buffer2)); 
        } while (strcmp(buffer2, "q") != 0); //Loops till user enters 'q'
        
        printf("*** End of Measuring Strings Demo ***\n\n");
}