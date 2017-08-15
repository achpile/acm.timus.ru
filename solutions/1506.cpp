#include <stdio.h>

int main() {
	int n, m, k, i, j, a[100];

	scanf("%d %d\n", &n, &m);

	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);

	k = n / m;
	if (n % m) k++;

	for (i = 0; i < k; i++) {
		for (j = i; j < n; j+=k)
			printf("%4d", a[j]);

		printf("\n");
	}

	return 0;
}
