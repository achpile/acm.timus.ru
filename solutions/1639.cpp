#include <stdio.h>
#include <math.h>
#include <vector>

int main() {
	int m, n, r;

	scanf("%d %d", &m, &n);

	r = m - 1 + m * (n - 1);

	if (m == 1 && n == 1) printf("[second]=:]\n");
	else if (r % 2)       printf("[:=[first]\n");
	else                  printf("[second]=:]\n");

	return 0;
}
