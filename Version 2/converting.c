// CONVERTING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80 // Define macro
#include "converting.h" // Include header file

void converting(void)
{

	// V1
	printf("*** Start of Converting Strings to int Demo ***\n"); // Starting sentence displayed
	// Declare variables
	char intString[BUFFER_SIZE];
	int intNumber;

	do
	{
		printf("Type an int numeric string (q - to quit):\n");
		fgets(intString, BUFFER_SIZE, stdin);// Read input of the BUFFER_SIZE and sends to the terminal
		intString[strlen(intString) - 1] = '\0'; // Input passed to intString

		if (strcmp(intString, "q") != '\0'); // If user does not input q for quit, store the address of inputed intString
		intNumber = atoi(intString);
		printf("Converted number is %d\n", intNumber);

	} while (strcmp(intString, "q") != 0); // Execute the loop untill q is entered for quit

	printf("*** End of Converting Strings to int Demo ***\n\n"); // Ending sentence displayed

	// V2
	printf("*** Start of Converting Strings to double Demo ***\n"); // Starting sentence displayed
	// Declare variables
	char doubleString[BUFFER_SIZE];
	double doubleNumber;

	do
	{
		printf("Type the double numeric string (q - to quit):\n");
		fgets(doubleString, BUFFER_SIZE, stdin); // Read input of the BUFFER_SIZE and sends to the terminal
		doubleString[strlen(doubleString) - 1] = '\0';

		if ((strcmp(doubleString, "q") != 0))
		{
			doubleNumber = atof(doubleString);
			printf("Converted number is %f\n", doubleNumber);
		}
	} while (strcmp(doubleString, "q") != 0); // Execute the loop untill q is entered for quit

	printf("*** End of Converting Strings to double Demo ***\n\n"); // Ending sentence displayed


}

