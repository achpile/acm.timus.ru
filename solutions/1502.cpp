#include <stdio.h>

int main() {
	unsigned long long s, i, n;

	s = 0;
	scanf("%llu", &n);

	for (i = 1; i <= n; i++)
		s += (i + 1) * i * 3 / 2;

	printf("%llu\n", s);

	return 0;
}
