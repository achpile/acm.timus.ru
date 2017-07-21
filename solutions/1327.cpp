#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int a, b, r;

	scanf("%d\n%d", &a, &b);

	r = (b - a) / 2;

	if (a % 2 || b % 2) r++;

	printf("%d\n", r);

	return 0;
}
