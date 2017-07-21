#include <stdio.h>

int main() {
	int n, a, b, i, j;
	int x[1000000];

	scanf("%d\n", &n);
	for (i = n - 1; i >= 0; i--) {
		scanf("%d %d\n", &a, &b);
		x[i] = a + b;
		j    = i;

		while (j < n && x[j] > 9) {
			x[j+1] += x[j] / 10;
			x[j]    = x[j] % 10;
			j++;
		}
	}

	for (i = n - 1; i >= 0; i--) {
		printf("%d", x[i]);
	}

	printf("\n");

	return 0;
}
