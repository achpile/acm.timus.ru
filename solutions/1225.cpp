#include <stdio.h>

long long unsigned count(int n) {
	if (n == 1) return 2;
	if (n == 2) return 2;
	if (n == 3) return 4;
	if (n == 4) return 6;
	if (n == 5) return 10;
	if (n == 6) return 16;
	if (n == 7) return 26;
	if (n == 8) return 42;
	if (n == 9) return 68;

	return count(n - 1) + count(n - 2);
}

int main() {
	int n;

	scanf("%d", &n);
	printf("%llu\n", count(n));

	return 0;
}
