#include <stdio.h>

int main() {
	long long int n, m, k, a;

	scanf("%lld %lld", &n, &m);

	if (n == 1) {
		printf("0\n");
		return 0;
	}

	if (m == 1) {
		printf("1\n");
		return 0;
	}


	if (m >= n) {
		a = n;
		k = 0;
	} else {
		a = m;
		k = 1;
		n--;
	}

	printf("%lld\n", k + (a - 1) * 2);

	return 0;
}
