/* FUNDAMENTALS MODULE SOURCE */
#define _CRT_SECURE_NO_WARNINGS

//Define macros
#define BUFFER_SIZE 80
#define NUM_INPUT_SIZE 10

//Include header file, "fundamentals.h"
#include "fundamentals.h"

//V1
//Find the index of a character in a string,measure the length of a string and copy a string
void fundamentals(void) {

	//starting message
	printf("*** Start of Indexing Strings Demo ***\n");
	//Declare variables
	char buffer1[BUFFER_SIZE];
	char numInput[NUM_INPUT_SIZE];
	size_t position;

	// Get user input and loop until user enters "q" to exit
	do {
		printf("Type not empty string (q - to quit): \n");
		// Get user input string
		fgets(buffer1, BUFFER_SIZE, stdin);
		buffer1[strlen(buffer1) - 1] = '\0';
		if (strcmp(buffer1, "q") != 0) {
			printf("Type the character position within the string:\n");
			// Get user input character position
			fgets(numInput, NUM_INPUT_SIZE, stdin);
			numInput[strlen(numInput) - 1] = '\0';
			// Validate user position input is not greater than string length
			position = atoi(numInput);
			if (position >= strlen(buffer1)) {
				position = strlen(buffer1) - 1;
				printf("Too big... Position reduced to max. availbale\n");
			}
			// Print the character at the position
			printf("The character found at %d position is \'%c\'\n",
				(int)position, buffer1[position]);
		}
	} while (strcmp(buffer1, "q") != 0);
	//Ending message
	printf("***End of Indexing Strings Demo ***\n\n");




	//V2
	//Starting message
	printf("*** Start of Measuring Strings Demo ***\n");
	//Declare variables
	char buffer2[BUFFER_SIZE];
	//Loop until user quits (q)
	do {
		//Get input string
		printf("Type a string (q - to quit): \n");
		fgets(buffer2, BUFFER_SIZE, stdin);
		//remove newline character trailing
		buffer2[strlen(buffer2) - 1] = '\0';
		//if 'q' is not entered, print length of string
		if (strcmp(buffer2, "q") != 0)
			printf("The length of \'%s\' is %d characters\n",
				buffer2, (int)strlen(buffer2));
	} while (strcmp(buffer2, "q") != 0);
	//Ending message
	printf("** End of Measuring Strings Demo ***\n\n");



	// V3
	// Starting message
	printf("*** Start of Copying strings Demo ***\n");
	// Declare variables
	char destination[BUFFER_SIZE];
	char source[BUFFER_SIZE];
	// Get user input and loop until user enters "q" to exit
	do
	{
		// Reset destination string
		destination[0] = '\0';
		printf("Destination string is reset to empty\n");
		// Get user input string
		printf("Type the source string (q - to quit):\n");
		fgets(source, BUFFER_SIZE, stdin);
		// Remove the trailing newline character
		source[strlen(source) - 1] = '\0';
		// If user input is not "q", copy the string
		if (strcmp(source, "q") != 0)
		{
			// `strcpy` copies the string from source to destination
			strcpy(destination, source);
			// Print the destination string
			printf("New destination string is \'%s\'\n", destination);
		}
	} while (strcmp(source, "q") != 0);
	// Ending message
	printf("*** End of Copying Strings Demo ***\n\n");
}