#include <stdio.h>

int main() {
	int a, i;

	scanf("%d", &a);
	printf("%d\n", 2*a - 1);

	for (i = 0; i < a; i++)
		printf("%d ", a - i);

	for (i = a - 1; i > 0; i--)
		printf("%d ", a - i);

	printf("\n");

	return 0;
}
