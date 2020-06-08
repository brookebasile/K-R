#include <stdio.h>

int main(){
	printf("%d\n", getchar() != EOF);
}

//CTRL + D will give 0 (getchar = EOF = EOF, 0 = false)
//char will give 1 (getchar != EOF, 1 = true)
