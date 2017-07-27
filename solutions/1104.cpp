#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int get(char c) {
	if (c >= '0' && c <= '9') return c - 48;
	if (c >= 'A' && c <= 'Z') return c - 55;

	return 0;
};

int main() {
	char a;
	int s, k, i, t;

	k = 0;
	s = 0;

	while (scanf("%c", &a) != EOF) {
		t = get(a);
		s += t;

		if (t + 1 > k)
			k = t + 1;
	}

	if (k < 2) k = 2;

	for (i = k; i <= 36; i++) {
		if (s % (i - 1) == 0) {
			printf("%d\n", i);
			return 0;
		}
	}

	printf("No solution.\n");

	return 0;
}
