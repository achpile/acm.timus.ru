#include <stdio.h>
#include <cmath>

int main() {
	unsigned long long int r, h, d, a, i;

	scanf("%llu", &r);

	a = r;
	h = r;

	for (i = 1; i < r; i++) {
		while (sqrt(i*i + (h-1)*(h-1)) >= (double)r)
			h--;

		a += h;
	}

	printf("%llu\n", a * 4);

	return 0;
}
