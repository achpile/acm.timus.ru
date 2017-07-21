#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int mypow(int x, int n, int m) {
	if (n == 0) return 1;
	if (n == 1) return x;

	int a = mypow(x, n / 2, m);

	if (n % 2) return a * a * x % m;
	else       return a * a % m;
}

int main() {
	int n, m, y, x, c;

	scanf("%d %d %d\n", &n, &m, &y);
	c = 0;

	for (x = 0; x < m; x++)
		if (mypow(x, n, m) == y) {
			printf("%d ", x);
			c++;
		}

	if (!c) printf("-1\n");
	else    printf("\n");

	return 0;
}
