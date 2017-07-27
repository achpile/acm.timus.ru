#include <stdio.h>
#include <string.h>

int main() {
	char a[256];
	int c, n, i, k;

	scanf("%s", a);

	n = strlen(a);
	c = 0;

	for (i = 0; i < n; i++) {
		k = a[i] - 48;
		c = (k + c * 10) % 3;
	}

	if (c == 0) printf("2\n");
	else        printf("1\n%d\n", c);

	return 0;
}
