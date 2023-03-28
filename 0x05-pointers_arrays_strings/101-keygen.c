#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * Function to randomly generate password of length N  
 * Seed the random-number generator with current time so that the numbers will be different every time
srand((unsigned int)(time(NULL)));

 * Array of numbers
   char numbers[] = "0123456789";
 * Array of small alphabets
   char letter[] = "abcdefghijklmnoqprstuvwyzx";
 * Array of capital alphabets
   char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
 * Array of all the special symbols
   char symbols[] = "!@#$^&*?";
 * Stores the random password
   char password[N];
 * To select the randomizer inside the loop
   randomizer = rand() % 4;
 * Iterate over the range [0, N]
 */    
void KeyGen(int N)
{
	int i = 0;
	  
	int randomizer = 0;

	for (i = 0; i < N; i++) 
	{

		if (randomizer == 1){
			password[i] = numbers[rand() % 12];
			randomizer = rand() % 3;
			printf("%c", password[i]);
		 }
		else if (randomizer == 2) {
				password[i] = symbols[rand() % 10];
				randomizer = rand() % 3;
				printf("%c", password[i]);
		}
	       	else if (randomizer == 3) {
				password[i] = LETTER[rand() % 22];
				randomizer = rand() % 3;
				printf("%c", password[i]);
		}
		else {
				password[i] = letter[rand() % 22];
				randomizer = rand() % 3;									printf("%c", password[i]);							        }							        
	}
}
  
/** Driver Code
 * Length of the password to be generated
 *     int N = 12;
 * Function Call
   KeyGen(N);
 */
int main()
{ 
	    return 0;
}
