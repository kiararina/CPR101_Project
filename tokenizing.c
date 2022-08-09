/*
Author: Jason Tan, jtan26@myseneca.ca, #026325100, 9/08/2022, CPR101, Final Project V2
[tokenizing.c] : [tokenizing]
Purpose: [This function takes a user inputted string and tokenizes it]
*/


// TOKENIZING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300
#include "tokenizing.h"


int main(void) {
    tokenizing();
    return 0;
}


/*
// V1
//void tokenizing(void) {

    printf("*** Start of Tokenizing Words Demo ***\n");
    char words[BUFFER_SIZE];
    char* nextWord = NULL;
    int wordsCounter;
    do {
        printf("Type a few words seperated by space (q - to quit):\n");

        fgets(words, BUFFER_SIZE, stdin); 
        words[strlen(words) - 1] = '\0'; // replaces the new line at the end of the string with null to indicate when the string ends

        if (strcmp(words, "q") != 0) { // only executes if user did not input 'q'
            nextWord = strtok(words, " "); // use an empty space as the delimiter to know when to split the string into tokens
            wordsCounter = 1; // intialize wordsCounter to 1, and start counting from 1 to keep track of how many words are being tokenized

    //  use a loop to print out the string, while incrementing wordsCounter to keep track of the number of words being tokenized 
            while (nextWord) {
                printf("Word #%d is \'%s\'\n", wordsCounter++, nextWord); 
                nextWord = strtok(NULL, " "); // when the next value of the string reads as null, we break out of the loop* /
            }
       }
    } while (strcmp(words, "q") != 0); // breaks the loop if user inputs 'q' as the only character

    printf("*** End of Tokenizing Words Demo ***\n\n");
}
*/


// V2
/* Did not modify the logic, but changed the delimiter from a single empty space(" ") to a single comma(",") */
void tokenizing(void) {

    printf("*** Start of Tokenizing Words Demo ***\n");
    char phrases[BUFFER_SIZE];
    char* nextPhrase = NULL;
    int phrasesCounter;
    do {
        printf("Type a few words seperated by comma (q - to quit):\n");

        fgets(phrases, BUFFER_SIZE, stdin); 
        phrases[strlen(phrases) - 1] = '\0'; // replaces the new line at the end of the string with null to indicate when the string ends

        if ((strcmp(phrases, "q") != 0)) { // only executes if user did not input 'q'
            nextPhrase = strtok(phrases, ","); // use a commas as the delimiter to know when to split the string into tokens
            phrasesCounter = 1; // intialize phrasesCounter to 1, and start counting from 1 to keep track of how many words are being tokenized

    //  use a loop to print out the string, while incrementing phrasesCounter to keep track of the number of words being tokenized 
            while (nextPhrase) {
                printf("Word #%d is \'%s\'\n", phrasesCounter++, nextPhrase); 
                nextPhrase = strtok(NULL, ","); // when the next value of the string reads as null, we break out of the loop
            }
        }
    } while (strcmp(phrases, "q") != 0); // breaks the loop if user inputs 'q' as the only character

    printf("*** End of Tokenizing Words Demo ***\n\n");
}


