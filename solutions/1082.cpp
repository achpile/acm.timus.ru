#include <stdio.h>

int main() {
	int n,k;

	scanf("%d\n", &n);

	for (k = n; k < 2 * n; k++) printf("%d ", k);

	printf("\n");

	return 0;
}
