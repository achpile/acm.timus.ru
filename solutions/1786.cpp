#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

char a[256];

int up(char c) {
	if (c >= 'A' && c <= 'Z') return 1;
	return 0;
}

int checkL(char x, char y) {
	int r = 0;

	if (up(x)      != up(y)     ) r++;
	if (toupper(x) != toupper(y)) r++;

	return r;
}

int check(int i) {
	int r = 0;

	r += checkL(a[i  ], 'S');
	r += checkL(a[i+1], 'a');
	r += checkL(a[i+2], 'n');
	r += checkL(a[i+3], 'd');
	r += checkL(a[i+4], 'r');
	r += checkL(a[i+5], 'o');

	return r * 5;
}

int main() {
	int i, m, n, t;

	scanf("%s\n", a);

	m = check(0);
	n = strlen(a);

	for (i = 1; i < n - 5; i++) {
		t = check(i);

		if (t < m)
			m = t;
	}

	printf("%d\n", m);

	return 0;
}
