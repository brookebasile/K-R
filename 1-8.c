#include <stdio.h>

int main(){
	int c;
	int n1 = 0;

	while ((c = getchar()) != EOF){
		if (c == '\n' || c == ' ' || c == '\t'){
			++n1;
		}
	}
	printf("%d\n", n1);
}
