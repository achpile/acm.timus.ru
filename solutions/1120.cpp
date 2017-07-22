#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
	long long int n, i, a, p;

	scanf("%lld\n", &n);

	p = (1 + sqrt(1 + 8 * n)) / 2;

	for (; p > 0 ;p--) {
		a = (2 * n - p * p + p) / (2 * p);

		if (a <= 0) continue;
		if (n == p * (2 * a + p - 1) / 2) break;
	}

	printf("%lld %lld\n", a, p);

	return 0;
}
