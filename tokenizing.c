
//Name : Asia Karki
//Class: ZCC
//Student ID: 112690227

#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300
#include "tokenizing.h" //include the tokenizing header file so we can call it
int main() {
    tokenizing();
return 0; }
//version 1
void tokenizing(void)
{
    printf("*** Start of Tokenizing Words Demo *** \n");// display the sentence in the middle and declare the variables below
    char  words[BUFFER_SIZE];// array of buffer size to store many bytes
    char* nextWord = NULL;
    int  wordsCounter;
    do
    {
        printf("Type a few words separated by space (q - to quit): \n");
        fgets(words, BUFFER_SIZE, stdin);//read input of a specific size buffer_size and copies to the terminal
        words[strlen(words) - 1] = '\0';//pass the inputed value to words of specific buffer size of 300 as above
        if (strcmp(words, "q") != 0)// if user does not input q store the address of inputed words according to the delimeter " " and set wordcounter to 1 to ensure a value was inputed
        {
            nextWord = strtok(words, " ");
            wordsCounter = 1;
            while (nextWord)//this while loop will display the word  as well as  dispaly the number in wordscounter which that word occupies  while nextword equal to a value once it equals zero we will exit the loop
            {
                printf("Word #%d is \'%s\'\n", wordsCounter++, nextWord);
                nextWord = strtok(NULL, " ");
            }
        }
    } while (strcmp(words, "q") != 0);//execute everything in the loop untill user inputs q
    printf("*** End of Tokenizing Words Demo ***\n\n");


/* Version 2 */
//>>insert here
printf("*** Start of Tokenizing Phrases Demo ***\n"); //print statement
char phrases [300];
char*  nextPhrase = NULL; //declare char pointer
int  phrasesCounter; //declare variable int type
do {
 printf("Type a few phrases separated by comma (q- to quit) : \n");//print statement
   fgets (phrases, BUFFER_SIZE, stdin);
      phrases [strlen (phrases) -1] = '\0';
  if ((strcmp (phrases, "q") != 0)) { //while loop is used and it iterartes tillthe value of string phrases is equal to q
         nextPhrase = strtok (phrases, ", ");// string library function is used to assign the value to string phrase
           phrasesCounter = 1;
           while (nextPhrase) {
                printf("Phrase #%d is \'%s\'\n", phrasesCounter++, nextPhrase) ;
                nextPhrase = strtok (NULL, ",");
          }
     }
} while (strcmp (phrases,"q") != 0);
printf("*** End of Tokenizing Phrases Demo ***\n\n");

}


