#include <stdio.h>
#include <string.h>

int main() {
	int n, i, a, b, t;
	char s[32];

	scanf("%d", &n);
	a = 2;
	b = 10;

	for (i = 0; i < n; i++) {
		scanf("%d %s\n", &t, s);

		if (!strcmp(s, "hungry")) {
			if (t > a) a = t;
		} else if (!strcmp(s, "satisfied")) {
			if (t < b) b = t;
		}
	}

	if (a < b) printf("%d\n", b);
	else       printf("Inconsistent\n");

	return 0;
}
