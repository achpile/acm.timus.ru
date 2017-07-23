#include <stdio.h>
#include <math.h>
#include <vector>
#include <string.h>
#include <stdlib.h>

struct node {
	long long int k;
	long long int s;
};

int main() {
	node a[10000];
	int i, n, x, y;

	scanf("%d\n", &n);

	for (i = 0; i < n; i++) {
		scanf("%lld", &a[i].k);

		a[i].s = a[i].k;
		if (i > 0) a[i].s += a[i-1].s;
	}

	scanf("%d\n", &n);

	for (i = 0; i < n; i++) {
		scanf("%d %d\n", &x, &y);

		x--;
		y--;

		if (x == 0) printf("%lld\n", a[y].s);
		else        printf("%lld\n", a[y].s - a[x-1].s);
	}

	return 0;
}
