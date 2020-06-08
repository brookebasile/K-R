#include <stdio.h>

#define NUMCHARS 95
#define MAXVAL 127
#define MINVAL 32

int main(){
	int array[NUMCHARS];
	char input;

	for (int i = 0; i < NUMCHARS; ++i)
		array[i] = 0;

	while ((input = getchar()) != EOF) {
		for (int i = MINVAL; i <= MAXVAL; ++i) {
			if (input == i)
				++array[i-32];
		}
	}
	
	putchar('\n');

	for (int i = MINVAL; i < MAXVAL; ++i) {
		printf("%c: ",i);
		for (int j = 0; j < array[i-32]; ++j) {
			putchar('x');
		}
		putchar('\n');
	}
	
	return 0;
}


/* pseudocode
 * 
 * define number of characters = 95 (ASCII 32 - 127)
 * 
 * array[number of characters]
 * populate each position in the array with 0 
 *
 * int i = 0 
 *
 * while input  
 * 	for int j = 32, j <= 127, ++j 
 * 		if input = j
 * 		++array[i]
 * 		++i
 */
