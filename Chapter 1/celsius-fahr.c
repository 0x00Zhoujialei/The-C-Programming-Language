#include <stdio.h>

int
main() {
	float fahr, celsius;
	float lower, upper, step;

	lower = 0;
	upper = 300.0;
	step = 20.0;

	celsius = lower;

	printf("Celsius Fahrenheit\n");

	while (celsius <= upper) {
		fahr = celsius * 9.0 / 5.0 + 32.0;
		printf("%7.1f %10.0f\n", celsius, fahr);
		celsius += step;
	}
}