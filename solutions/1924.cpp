#include <stdio.h>
#include <math.h>
#include <vector>

int main() {
	int n, c;

	scanf("%d",&n);

	c = n / 2 + n % 2;

	if (c % 2) printf("grimy\n");
	else       printf("black\n");

	return 0;
}
