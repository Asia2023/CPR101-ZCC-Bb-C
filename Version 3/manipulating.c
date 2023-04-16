//MANIPULATING SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80

//Include the "manipulating.h header file
#include "manipulating.h"
int main() {
    manipulating();
return 0; }
//V1
void manipulating(void) {

    //printing statement to start the execution process
    printf("*** Start of Concatenating Strings Demo ***\n");
    char    string1[BUFFER_SIZE];//declared a string1 array of the char type
    char    string2[BUFFER_SIZE];//declared a string2 array of the char type
    do {
        printf("Type the 1st string (q - to quit):\n");//printing directions for an input
        fgets(string1, BUFFER_SIZE, stdin);//obtaining a value for the string1 array
        string1[strlen(string1) - 1] = '\0';

        if ((strcmp(string1, "q") != 0)) {
            printf("Type the 2nd string;\n");//printing directions for a second input
            fgets(string2, BUFFER_SIZE, stdin);//obtaining a value for the string2 array
            string2[strlen(string2) - 1] = '\0';
            strcat(string1, string2);
            printf("Concatenated string is \'%s\'\n", string1);//using the concatenated process to print
        }//here exit the loop
    } while (strcmp(string1, "q") != 0);//entered a while-loop comparison if string1!=0
    printf("*** End of Concatenating Strings Demo ***\n\n");//printing statement to end the execution process


//v2
printf( "*** Start of Comparing strings Demo ***\n");//start
 char   compare1[BUFFER_SIZE]; //comparing string size of max 80
 char   compare2[BUFFER_SIZE]; //comparing string size of max 80
int result; // taking an variable in int type
do{
printf ("Type the 1st string to compare (q - to quit) : \n");//print 1st string to compare
fgets(compare1, BUFFER_SIZE, stdin);//taking value for compare1
compare1[strlen(compare1) - 1] = '\0';
if (strcmp(compare1,"q") != 0) {
printf ("Type the 2nd string to compare: \n"); //printing 2nd string to compare
fgets (compare2, BUFFER_SIZE, stdin);//obtaining a value for the compare2 array
compare2 [strlen ( compare2) -1] = '\0';
result = strcmp(compare1, compare2); //assigning value if string  to integer
if (result < 0)
printf ("\'%s\' string is less than \'%s\'\n", compare1, compare2) ;
else if (result == 0)
printf ("\'%s\' string is equal to \'%s\'\n", compare1, compare2);
else 
printf ("\'%s\' string is greater than \'%s\'\n", compare1, compare2);

}
} while (strcmp (compare1,"q") != 0);
printf ("*** End of Comparing Strings Demo ***\n\n");//printing statement to end the execution process
 
//v3
printf ("*** start of searching strings Demo ***\n");//start
char  haystack[BUFFER_SIZE];//declared a haystack array of the char type
char needle [BUFFER_SIZE];//declared a needle array of the char type
char* occurrence = NULL;
do{
    printf ("Type the string (q - to quit): \n"); //print type the string
       fgets (haystack, BUFFER_SIZE, stdin); //taking value for haystack
    haystack [strlen (haystack) - 1] = '\0';
if (strcmp (haystack, "q") != 0) {
printf ("Type the substring: \n");//print type the substring
 fgets (needle, BUFFER_SIZE, stdin);//obtaining a value for the needle array
needle [strlen (needle) - 1] = '\0';
occurrence = strstr (haystack, needle);
if (occurrence)
printf ("\'%s\' found at %d position\n", needle, (int) (occurrence - haystack));
else 
printf("Not found\n");
}
 } while (strcmp (haystack,"q") != 0);
printf ("*** End of Searching Strings Demo ***\n\n");//printing statement to end the execution process
}