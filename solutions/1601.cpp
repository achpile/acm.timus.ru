#include <stdio.h>
int main() {
	char c;
	int  A;

	A = 1;

	while (fread(&c, 1, 1, stdin)) {
		if (c >= 'A' && c <= 'Z') {
			if (A) {
				printf("%c", c);
				A = 0;
			} else
				printf("%c", c + 32);
		} else {
			printf("%c", c);

			if (c == '!' || c == '?' || c == '.')
				A = 1;
		}
	}

	return 0;
}
