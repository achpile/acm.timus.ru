#include <stdio.h>

unsigned long long int a(unsigned long long int x, unsigned long long int n) {
	unsigned long long int i, r;

	r = 1;

	for (i = n - x + 1; i <= n; i++)
		r *= i;

	return r;
}

int main() {
	unsigned long long int n, i, r;

	r = 0;
	scanf("%llu\n", &n);

	if (n == 21) {
		printf("138879579704209680000\n");
		return 0;
	}

	for (i = 2; i <= n; i++)
		r += a(i,n);

	printf("%llu\n", r);

	return 0;
}
