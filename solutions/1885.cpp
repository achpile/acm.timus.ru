#include <stdio.h>

int main() {
	int h, t, v, x;
	float mi, ma;

	scanf("%d %d %d %d", &h, &t, &v, &x);

	if (v == x) {
		mi = 0;
		ma = 0;
	} else {
		mi = ((float)h - (float)x*(float)t) / ((float)v - (float)x);
		if (mi < 0) mi = 0;

		if   ((float)h/(float)t > (float)x) ma = t;
		else ma = (float)h / ((float)x + 0.000001f);
	}

	printf("%.6f %.6f\n", mi, ma);

	return 0;
}
