#include <stdio.h>
#include <vector>

int main() {
	int n, m, p, i, a[6];

	for (i = 0; i < 6; i++)
		scanf("%d", &a[i]);

	scanf("%d", &p);

	n = a[0] * 10   +
	    a[1] * 50   +
	    a[2] * 100  +
	    a[3] * 500  +
	    a[4] * 1000 +
	    a[5] * 5000;

	     if (a[0]) m = n + p - 10;
	else if (a[1]) m = n + p - 50;
	else if (a[2]) m = n + p - 100;
	else if (a[3]) m = n + p - 500;
	else if (a[4]) m = n + p - 1000;
	else if (a[5]) m = n + p - 5000;

	i = n / p - m / p + 1;

	printf("%d\n", i);

	for (i = m / p; i <= n / p; i++)
		printf("%d ", i);

	printf("\n");

	return 0;
}
