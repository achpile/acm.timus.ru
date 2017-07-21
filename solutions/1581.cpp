#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int n, x, c, i, t;

	scanf("%d\n", &n);
	scanf("%d"  , &x);

	c = 1;
	for (i = 1; i < n; i++) {
		scanf("%d", &t);
		if (t == x)
			c++;
		else {
			printf("%d %d ", c, x);
			x = t;
			c = 1;
		}
	}

	printf("%d %d\n", c, x);

	return 0;
}
