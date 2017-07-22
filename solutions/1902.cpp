#include <stdio.h>

int main() {
	int n, t, s, i, a;
	double z;

	scanf("%d %d %d", &n, &t, &s);
	for (i = 0; i < n; i++) {
		scanf("%d", &a);
		z = (double)a + (double)t + (double)s;
		z /= 2.0f;
		printf("%.6lf\n", z);
	}

	return 0;
}
