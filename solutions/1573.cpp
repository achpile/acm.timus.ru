#include <stdio.h>
#include <math.h>
#include <vector>
#include <string.h>
#include <stdlib.h>

int main() {
	int i, n, r, y, b, s;
	char a[16];

	scanf("%d %d %d\n", &b, &r, &y);
	scanf("%d\n", &n);

	s = 1;

	for (i = 0; i < n; i++) {
		scanf("%s", a);

		if (!strcmp(a, "Red"   )) s *= r;
		if (!strcmp(a, "Blue"  )) s *= b;
		if (!strcmp(a, "Yellow")) s *= y;
	}

	printf("%d\n", s);

	return 0;
}
