#include <stdio.h>
#include <math.h>

int main() {
	int x, y, k, i, l;

	scanf("%d %d", &x, &y);

	x--;
	y--;
	k = 1;
	l = x > y ? y : x;

	for (i = 2; i <= l && x >= i && y >= i; i++)
		while (x % i == 0 && y % i == 0) {
			k *= i;
			x /= i;
			y /= i;
		}

	printf("%d\n", k * (x + y - 1));

	return 0;
}
