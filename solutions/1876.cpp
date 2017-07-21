#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int a, b;
	int r1, r2;

	scanf("%d %d\n", &a, &b);

	r1 = 39 * 2 + 40 + (a - 40) * 2 + 1;
	r2 = b * 2 + 40;

	printf("%d\n", r1 > r2 ? r1 : r2);

	return 0;
}
