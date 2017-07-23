#include <stdio.h>

int main() {
	long long int n, m, i;

	scanf("%lld %lld", &n, &m);

	for (i = 0; i < n; i++) printf("%lld ", i + 1);
	printf("\n");

	for (i = 0; i < m; i++) printf("%lld ", (i+2) * n);
	printf("\n");

	return 0;
}
