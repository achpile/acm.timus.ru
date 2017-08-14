#include <stdio.h>

int main() {
	int m, d1, d2, n;

	scanf("%d %d %d", &m, &d1, &d2);

	int i, c[d2];

	n = m * d1;

	for (i = 0; i < d2    ; i++) c[i] = n / d2;
	for (i = 0; i < n % d2; i++) c[i]++;

	for (i = 0; i < d2; i++)
		printf("%d ", c[i]);

	printf("\n");

	return 0;
}
