#include <stdio.h>
#include <math.h>
#include <vector>



int main() {
	int n, t, t1, i, r;
	double s, s1;

	scanf("%d %lf\n%d\n", &t, &s, &n);

	r = 0;

	if (t == 1) s = 2*s;
	if (t == 2) s = sqrt(2.0f)*s;

	for (i = 0; i < n; i++) {
		scanf("%d %lf\n", &t1, &s1);

		if (t1 == 1) s1 = 2*s1;
		if (t1 == 3) s1 = sqrt(3.0f) * s1 / 2.0f;

		if (s1 <= s) r++;
	}

	printf("%d\n", r);

	return 0;
}
