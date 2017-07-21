#include <stdio.h>

int main() {
	int n, k, i, a;
	int d, b;

	d = 0;
	b = 0;

	scanf("%d %d\n", &n, &k);
	for (i = 0; i < n; i++) {
		scanf("%d", &a);

		if (a > k) b += a - k;
		if (a < k) d += k - a;
	}

	printf("%d %d\n", b, d);

	return 0;
}
