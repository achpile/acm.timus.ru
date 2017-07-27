#include <stdio.h>

int main() {
	unsigned long long int a, i, r;

	scanf("%llu", &a);

	if (a % 4 == 1) r = 1;
	if (a % 4 == 2) r = 1;
	if (a % 4 == 3) r = 2;
	if (a % 4 == 0) r = 0;

	if (a >= 5 && (a - 5) % 20 == 0)
		r++;

	printf("%llu\n", r);
	return 0;
}
