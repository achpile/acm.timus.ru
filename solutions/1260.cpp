#include <stdio.h>
#include <vector>

int r(int k) {
	if (k == 1) return 1;
	if (k == 2) return 1;
	if (k == 3) return 2;
	if (k == 4) return 4;
	if (k == 5) return 6;
	if (k == 6) return 9;
	if (k == 7) return 14;
	if (k == 8) return 21;
	if (k == 9) return 31;
	if (k == 10) return 46;
	if (k == 11) return 68;
	if (k == 12) return 100;
	if (k == 13) return 147;
	if (k == 14) return 216;
	if (k == 15) return 317;
	if (k == 16) return 465;
	if (k == 17) return 682;
	if (k == 18) return 1000;
	if (k == 19) return 1466;
	if (k == 20) return 2149;
	if (k == 21) return 3150;
	if (k == 22) return 4617;
	if (k == 23) return 6767;
	if (k == 24) return 9918;
	if (k == 25) return 14536;
	if (k == 26) return 21304;
	if (k == 27) return 31223;
	if (k == 28) return 45760;
	if (k == 29) return 67065;

	return r(k-1) + r(k-3) + 1;
}

int main() {
	int n;

	scanf("%d", &n);

	printf("%d\n", r(n));

	return 0;
}
