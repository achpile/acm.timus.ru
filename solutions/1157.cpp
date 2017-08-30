#include <stdio.h>
#include <math.h>

int f(int x) {
	int i, l, r;

	r = 1;
	l = sqrt(x);

	for (i = 2; i <= l; i++)
		if (x % i == 0)
			r++;

	return r;
}

int main() {
	int m, n, k, i, a;

	a = 0;

	scanf("%d %d %d", &m, &n, &k);

	for (i = 1; i <= 10000 - k; i++)
		if (f(i + k) == n && f(i) == m) {
			printf("%d\n", i + k);
			a = 1;
			break;
		}

	if (!a) printf("0\n");

	return 0;
}
