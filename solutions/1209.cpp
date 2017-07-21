#include <stdio.h>
#include <math.h>
#include <vector>

int getN(unsigned long long int k) {
	if (k == 0) return 1;
	if (k == 1) return 1;

	unsigned long long int d  = 1 + 8 * k;
	unsigned long long int sd = sqrt(d);

	if (d != sd * sd) return 0;
	if (sd % 2) return 1;

	return 0;
}

int main() {
	unsigned long long int n, k, i;

	scanf("%llu\n", &n);

	for (i = 0; i < n; i++) {
		scanf("%llu", &k);
		printf("%d ", getN(k - 1));
	}

	printf("\n");

	return 0;
}
