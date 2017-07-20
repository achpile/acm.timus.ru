#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, n;

	scanf("%d", &a);

	if (a < 1) n = abs(a) + 2;
	else       n = abs(a);

	if (a == 1) printf("1\n");
	else        printf("%d\n", (a + 1) * n / 2);

	return 0;
}
