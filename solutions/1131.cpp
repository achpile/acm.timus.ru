#include <stdio.h>

int main() {
	long long int n, k, a, c, i;

	scanf("%lld %lld", &n, &k);

	a = 1;
	c = 0;
	i = 1;

	if (n == 1) {
		printf("0\n");
		return 0;
	}

	while (i < k && a < n) {
		a += i;
		i *= 2;
		c++;
	}

	if (a >= n) {
		printf("%lld\n", c);
		return 0;
	}

	n -= a;

	if (n % k) printf("%lld\n", n / k + 1 + c);
	else       printf("%lld\n", n / k + c);

	return 0;
}
