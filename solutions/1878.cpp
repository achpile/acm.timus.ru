#include <stdio.h>
#include <stdlib.h>

int off[4];

int diff(int x, int y) {
	if ((x == 4 && y == 1) || (x == 1 && y == 4)) return 1;

	return abs(y - x);
}

int res(int x) {
	return diff(x, off[0]) +
	       diff(x, off[1]) +
	       diff(x, off[2]) +
	       diff(x, off[3]);
}

int min(int x, int y) {
	return (x < y) ? x : y;
}

int main() {
	int a[4][4];

	scanf("%d %d %d %d\n", &a[0][0], &a[1][0], &a[2][0], &a[3][0]);
	scanf("%d %d %d %d\n", &a[0][1], &a[1][1], &a[2][1], &a[3][1]);


	off[0] = a[0][0];
	off[1] = a[0][1];
	off[2] = a[1][0];
	off[3] = a[1][1];

	printf("%d\n", min(res(1), min(res(2), min(res(3), res(4)))));

	return 0;
}
