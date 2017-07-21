#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <vector>

int getSum(char c) {
	switch (c) {
		case 'a': return 1;
		case 'b': return 2;
		case 'c': return 3;
		case 'd': return 1;
		case 'e': return 2;
		case 'f': return 3;
		case 'g': return 1;
		case 'h': return 2;
		case 'i': return 3;
		case 'j': return 1;
		case 'k': return 2;
		case 'l': return 3;
		case 'm': return 1;
		case 'n': return 2;
		case 'o': return 3;
		case 'p': return 1;
		case 'q': return 2;
		case 'r': return 3;
		case 's': return 1;
		case 't': return 2;
		case 'u': return 3;
		case 'v': return 1;
		case 'w': return 2;
		case 'x': return 3;
		case 'y': return 1;
		case 'z': return 2;
		case '.': return 1;
		case ',': return 2;
		case '!': return 3;
		case ' ': return 1;
	}

	return 0;
}

int main() {
	int r;
	char c;

	r = 0;
	while ((c = getchar()) != EOF)
		r += getSum(c);

	printf("%d\n", r);

	return 0;
}
