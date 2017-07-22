#include <stdio.h>

int main() {
	int l, w, n1, n2;

	scanf("%d %d %d %d", &l, &w, &n1, &n2);

	if (n1 == n2) printf("%d\n", l);
	if (n1 <  n2) printf("%d\n", 2 * w + (n2 - n1 - 1) * (l + 2 * w));
	if (n1 >  n2) printf("%d\n", 2 * w + (n1 - n2 - 1) * (l + 2 * w) + 2 * l);

	return 0;
}
