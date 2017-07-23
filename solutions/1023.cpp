#include <stdio.h>
#include <math.h>
#include <vector>
#include <string.h>
#include <stdlib.h>

int main() {
	int i, k;

	scanf("%d\n", &k);

	if (k == 3) {
		printf("2\n");
		return 0;
	}

	for (i = 3; i <= k / 2 + 1; i++) {
		if (k % i == 0) {
			printf("%d\n", i - 1);
			return 0;
		}
	}

	printf("%d\n", k - 1);

	return 0;
}
