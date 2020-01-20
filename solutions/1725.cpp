#include <stdio.h>
#include <math.h>
#include <cstdlib>
#include <climits>
#include <cmath>
#include <algorithm>

int main() {
	int n, k;

	scanf("%d %d\n", &n, &k);
	printf("%d\n", std::max(0, std::max(n - k - 2, k - 3)));

	return 0;
}
