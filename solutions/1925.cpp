#include <stdio.h>

int main() {
	int i, k, n, b, g, sb, sg;

	scanf("%d %d", &n, &k);

	sb = k;
	sg = 0;
	for (i = 0; i < n; i++) {
		scanf("%d %d", &b, &g);
		sb += b;
		sg += g;
	}

	i = sb - 2 * (n + 1) - sg;

	if (i >= 0) printf("%d\n", i);
	else        printf("Big Bang!\n");

	return 0;
}
