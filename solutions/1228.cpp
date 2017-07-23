#include <stdio.h>
#include <math.h>
#include <vector>
#include <string.h>
#include <stdlib.h>

int main() {
	unsigned long long int n, s, d, i, a;

	scanf("%llu %llu\n", &n, &s);

	for (i = 0; i < n; i++) {
		scanf("%llu", &d);
		printf("%llu ", s / d - 1);
		s = d;
	}

	printf("\n");

	return 0;
}
