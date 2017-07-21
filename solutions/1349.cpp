#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	int a;

	scanf("%d", &a);

	if (a == 1) printf("1 2 3\n");
	else if (a == 2) printf("3 4 5\n");
	else printf("-1\n");

	return 0;
}
