#include <stdio.h>

int main() {
	long int n, p, s, i;

	scanf("%ld", &n);
	s = 0;

	for (i = 0; i < n; i++) {
		scanf("%ld\n", &p);
		s += p;
	}

	printf("%f\n", (float)s / (float)n);

	return 0;
}
