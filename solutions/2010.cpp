#include <stdio.h>
#include <math.h>
#include <vector>
#include <stdlib.h>

int king(int x, int y, int n) {
	int r = 0;

	if (x + 1 <  n && y + 1 <  n) r++;
	if (x + 1 <  n              ) r++;
	if (x + 1 <  n && y - 1 >= 0) r++;
	if (              y - 1 >= 0) r++;
	if (              y + 1 <  n) r++;
	if (x - 1 >= 0 && y + 1 <  n) r++;
	if (x - 1 >= 0              ) r++;
	if (x - 1 >= 0 && y - 1 >= 0) r++;

	return r;
}

int knight(int x, int y, int n) {
	int r = 0;

	if (x + 2 <  n && y + 1 <  n) r++;
	if (x + 2 <  n && y - 1 >= 0) r++;
	if (x - 2 >= 0 && y + 1 <  n) r++;
	if (x - 2 >= 0 && y - 1 >= 0) r++;
	if (x + 1 <  n && y + 2 <  n) r++;
	if (x + 1 <  n && y - 2 >= 0) r++;
	if (x - 1 >= 0 && y + 2 <  n) r++;
	if (x - 1 >= 0 && y - 2 >= 0) r++;

	return r;
}

int bishop(int x, int y, int n) {
	if (x + y < n) return (n - abs(x - y)) + (x + y) - 1;
	else           return (n - abs(x - y)) + 2 * n - (x + y) - 3;
}

int rook(int x, int y, int n) {
	return 2 * (n - 1);
}

int queen(int x, int y, int n) {
	return bishop(x, y, n) + rook(x, y, n);
}

int main() {
	int  x, y, n;
	char a[3];

	scanf("%d\n", &n);
	scanf("%d %d\n", &x, &y);

	x--;
	y--;

	printf("King: %d\n"  , king(x, y, n));
	printf("Knight: %d\n", knight(x, y, n));
	printf("Bishop: %d\n", bishop(x, y, n));
	printf("Rook: %d\n"  , rook(x, y, n));
	printf("Queen: %d\n" , queen(x, y, n));

	return 0;
}
