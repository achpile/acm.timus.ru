#include <stdio.h>
#include <cmath>

int main() {
	int il, ih, iw, k;
	double l, h, w, t;

	scanf("%d %d %d", &il, &ih, &iw);

	l = (double)il / 100.0;
	h = (double)ih / 100.0;
	w = (double)iw / 30.0;

	t = sqrt((2.0*h - l) / 9.81);

	if (l / 2.0 > h) {
		printf("butter\n");
		return 0;
	}

	if (t < 1.0 / (2.0 * w)) {
		printf("butter\n");
		return 0;
	}

	k = (t - 1.0 / (2.0 * w)) * w;

	if (k % 2) printf("butter\n");
	else       printf("bread\n");

	return 0;
}
