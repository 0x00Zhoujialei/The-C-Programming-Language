#include <stdio.h>

int
main() {
	int c;

	while ((c = getchar()) != EOF) {
		if ('\t' == c) {
			putchar('\\');
			putchar('t');
		} else if ('\b' == c) {
			putchar('\\');
			putchar('b');
		} else if ('\\' == c) {
			putchar('\\');
			putchar('\\');
		} else {
			putchar(c);
		}
	}
}