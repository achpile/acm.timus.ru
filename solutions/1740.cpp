#include <stdio.h>
#include <math.h>
#include <cstdlib>
#include <climits>
#include <cmath>
#include <algorithm>

int main() {
	int l, k, h;
	float r;

	scanf("%d %d %d\n", &l, &k, &h);

	r = h * (l / k);

	printf("%.5f %.5f\n", r, (l % k == 0) ? r : r + h);

	return 0;
}
