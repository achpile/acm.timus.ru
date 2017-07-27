#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <vector>

int r(int n, int k) {
	if (n == 0) return 1;
	if (n == 1) return k-1;

	return (k-1) * (r(n-1,k) + r(n-2,k));
}

int main() {
	int n, k;

	scanf("%d\n%d\n", &n, &k);
	printf("%d\n", r(n,k));

	return 0;
}
