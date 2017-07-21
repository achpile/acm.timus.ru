#include <stdio.h>

int main() {
	int t1, t2, i, k, t;

	scanf("%d %d", &t1, &t2);

	t = 0;
	for (i = 0; i < 10; i++) {
		scanf("%d", &k);
		t += 20 * k;
	}

	t2 -= t;
	if (t2 < 0) t2 = 0;

	if (t1 > t2) printf("Dirty debug :(\n");
	else         printf("No chance.\n");

	return 0;
}
