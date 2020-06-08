#include <stdio.h>

#define	LOWER	0 
#define	UPPER	300
#define	STEP	20

void tempConversion(int fahr, int celsius);

int main() {
	int fahr, celsius;
	
	tempConversion(fahr, celsius);

	return 0;
}

void tempConversion(int fahr, int celsius) {
	fahr = LOWER;
	while (fahr <= UPPER) {
		celsius = 5 * (fahr-32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + STEP;
	}
}
