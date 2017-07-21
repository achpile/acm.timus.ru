#include <stdio.h>

int main() {
	long long int x, y, c;

	scanf("%lld %lld %lld", &x, &y, &c);

	if (x + y < c ) {
		printf("Impossible\n");
		return 0;
	}

	if (x > c) {
		printf("%lld 0\n", c);
		return 0;
	}

	if (y > c) {
		printf("0 %lld\n", c);
		return 0;
	}

	if (y > x) printf("%lld %lld\n", c - y, y);
	else       printf("%lld %lld\n", x, c - x);

	return 0;
}
