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
	printf("*** Start of Converting Strings to double Demo ***\n");
	char doubleString[BUFFER_SIZE];
	double doubleNumber;

	do
	{
		printf("Type the double numeric string (q - to quit):\n");
		fgets(doubleString, BUFFER_SIZE, stdin);
		doubleString[strlen(doubleString) - 1] = '\0';

		if ((strcmp(doubleString, "q") != 0))
		{
			doubleNumber = atof(doubleString);
			printf("Converted number is %f\n", doubleNumber);
		}
	} while (strcmp(doubleString, "q") != 0);

	printf("*** End of Converting Strings to double Demo ***\n\n");

	// V3
	printf("*** Start of Converting Strings to long Demo ***\n");
	char longString[BUFFER_SIZE];
	long longNumber;

	do
	{
		printf("Type the long numeric string (q - to quit):\n");
		fgets(longString, BUFFER_SIZE, stdin);
		longString[strlen(longString) - 1] = '\0';

		if ((strcmp(longString, "q") != 0))
		{
			longNumber = stol(longString);
			printf("Converted number is %ld\n", longNumber);
		}
	} while (strcmp(longString, "q") != 0);
	printf("*** End of Converting Strings to long Demo ***\n\n");
}

