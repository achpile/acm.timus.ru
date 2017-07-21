#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	int a, b, c, d, k;

	scanf("%d %d %d %d", &a, &b, &c, &d);

	if (a > c) {
		printf("%d\n", a);
		return 0;
	}

	k = abs((c - a) / (d + b)) - 1;

	a += k * b;
	c -= k * d;

	while (1) {
		if (a + b > c) {
			printf("%d\n", c);
			break;
		};

		a += b;

		if (c - d < a) {
			printf("%d\n", a);
			break;
		};

		c -= d;
	}

	return 0;
}
