#include <stdio.h>
#include <string.h>

int main() {
	char a[64], b[64], c[64];

	int i, j, k, l, n, m;

	scanf("%s", a);
	l = strlen(a);
	m = -1;

	if (l == 1) {
		printf("%s\n", a);
		return 0;
	}

	for (i = l - 1; i > 0; i--) {
		for (j = 0; j <= l - i; j++) {
			strncpy(b, &a[j], i);
			n = 1;

			for (k = j + 1; k <= l - i; k++) {
				if (!memcmp(&a[k], b, i)) {
					n++;
				}
			}

			if (n > m) {
				m = n;
				strncpy(c, b, i);
				c[i] = 0;
			}
		}
	}

	printf("%s\n", c);

	return 0;
}
