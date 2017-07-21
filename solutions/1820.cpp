#include <stdio.h>

int main() {
	int n, k, res;

	scanf("%d %d", &n, &k);

	if (n < k) {
		printf("2\n");
		return 0;
	}

	res = 2 * n / k;
	if (2 * n % k) res++;

	printf("%d\n", res);

	return 0;
}
