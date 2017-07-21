#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	int h, w, n, i;
	int s, c, r, l;
	char a[128];

	scanf("%d %d %d\n", &h, &w, &n);

	scanf("%s", a);
	s = 1;
	c = strlen(a);

	for (i = 1; i < n; i++) {
		scanf("%s", a);
		l = strlen(a);

		if (c + 1 + l > w) {
			s++;
			c = l;
		} else
			c += l + 1;
	}

	r = s / h;
	if (s % h) r++;

	printf("%d\n", r);

	return 0;
}
