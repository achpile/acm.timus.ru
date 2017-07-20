#include <stdio.h>

int main() {
	int m, n, i, a;

	scanf("%d %d\n", &n, &m);

	int k[n];

	for (i = 0; i < n; i++)
		k[i] = 0;

	for (i = 0; i < m; i++) {
		scanf("%d\n", &a);
		k[a-1]++;
	}

	for (i = 0; i < n; i++)
		printf("%.2lf%%\n", 100.0f * k[i] / m);

	return 0;
}
