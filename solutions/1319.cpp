#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <vector>

int getSum(int diag, int n) {
	if (diag == 1) return 1;
	int x = diag - n;

	if (diag <= n) return (diag) * (diag + 1) / 2;
	else           return (n) * (n + 1) / 2 + (2 * (n - 1) - (x - 1)) * x / 2;
}

int getPos(int x, int y, int n) {
	if (x == 0   && y == 0  ) return 0;
	if (x == n-1 && y == n-1) return n*n - 1;

	if (x + y <  n) return getSum(x + y, n) + x;
	else            return getSum(x + y, n) + (n - y - 1);
}

int main() {
	int n, i, j;

	scanf("%d\n",&n);

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			printf("%d ", getPos(i, n - j - 1, n) + 1);

		printf("\n");
	}

	return 0;
}
