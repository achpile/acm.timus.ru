#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int getD(int n) {
	int r = 1;
	int i;

	for (i = 2; i <= n / 2; i++)
		if (n % i == 0)
			r += i;

	return r;
}

int main() {
	int x, y, i, k;
	int minN;
	double minK, t;

	minN = -1;
	scanf("%d %d\n", &x, &y);

	if (x == 1) {
		printf("1\n");
		return 0;
	}

	for (i = y; i >= x; i--) {
		k = getD(i);

		if (k == 1) {
			printf("%d\n", i);
			return 0;
		}

		t = (double)k / (double)i;

		if (minN == -1 || t < minK) {
			minK = t;
			minN = i;
		}
	}

	printf("%d\n", minN);

	return 0;
}
