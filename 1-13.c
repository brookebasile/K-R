#include <stdio.h>

#define	MAX_WORDS 10
#define MAX_LETTERS 10
#define RESET 0

int main(){
	int words[MAX_WORDS];

	for (int i = 0; i < MAX_WORDS; ++i)	//Initialize all values in the array to 0  
		words[i] = 0;
	
	int letters, word;
	char input;
	
	letters = word = 0;	//Counter initialization
	while ((input = getchar()) != EOF) {
		++letters;
		if (input == ' ' || input == '\t' || input == '\n') {
			words[word] = letters - 1;
			++word;
			letters = RESET;
		}
	}

	words[word] = letters;	//To acknowledge the last word if there's no space/tab/newline before EOF 
	putchar('\n');

	for (int i = MAX_LETTERS; i > 0;  --i) {			
		for (int j = 0; j < MAX_WORDS; ++j) { 
			if (words[j] >= i)
				putchar('x');
			else
				putchar(' ');
		}
		putchar('\n');
	}

	return 0;
}

 /* 
  *
 * 	0	1	2	3
 * 
 * 4				x
 * 
 * 3			x	x
 * 				
 * 2		x	x	x
 * 		
 * 1	x	x	x	x
 *	
 *   max 4 words
 *   max letters = 4, prints out 4 times
 *
 *   array[] = {1, 2, 3, 4}
 *
 *first print, i = 4
 *   at position 0, array[i] = 1
 *   at position 1, array[i] = 2
 *   at position 2, array[i] = 3
 *   at position 3, array[i] = 4
 *
 *pseudocode
 *   define max words 
 *   define max letters
 *   define reset
 *
 * 
 *   while EOF is not true
 *      add +1 to letter count for each char encountered
 *   	if a space, tab, or newline is present
 *		the word at point [word] is equal to the current letter count minus 1 (as we +1 before checking for condition)
 *		reset the letter count
 *   	
 *
 *   starting at i = max_letters, iterating while i >= 1, subtracting 1 after each iteration 
 *   	starting at the first address in the array, iterating thru all vars in the array  
 *   		print an 'x' for all counts in the array greater than or equal to i 
 *   		print a space for all counts in the array less than i
 *
 *       
 *
 */   	
