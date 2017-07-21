#include <stdio.h>
#include <math.h>
#include <stdlib.h>

bool happy(int a) {
	int x, y;

	x = a / 1000;
	y = a % 1000;

	x = x / 100 + (x % 100) / 10 + x % 10;
	y = y / 100 + (y % 100) / 10 + y % 10;

	return x == y;
}

int main() {
	int a;

	scanf("%d\n", &a);

	if (happy((a - 1) % 1000000) || happy((a + 1) % 1000000)) printf("Yes\n");
	else                                                      printf("No\n");

	return 0;
}
