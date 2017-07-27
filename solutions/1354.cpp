#include <stdio.h>
#include <string.h>

int main() {
	char a[30002];
	int i, n, j, f, k;

	scanf("%s", a);

	n = strlen(a);
	f = 0;

	if (n == 1) {
		printf("%s%s\n", a, a);
		return 0;
	}

	for (i = n / 2; i < n; i++) {
		f = 2;

		for (j = 0; j < n-i; j++) {
			if ((i-j-1 == 0) && (i+j==n-1)) {
				f = 0;
				break;
			}

			if (a[i-j-1] != a[i+j]) {
				f = 0;
				break;
			}
		}

		if (f==0) {
			f = 1;

			for (j = 1; j < n-i; j++) {
				if ((i-j == 0) && (i+j==n-1)) {
					f = 0;
					break;
				}

				if (a[i-j] != a[i+j]) {
					f = 0;
					break;
				}
			}
		}

		if (f) break;
	}

	if (f == 0) {
		f = 1;
		i = n - 1;
	}

	if (f == 1) k = 2 * i - n + 1;
	if (f == 2) k = 2 * i - n;

	for (j = 0; j < k; j++)
		a[n + j] = a[k - j - 1];

	a[n+j+1]=0;

	printf("%s\n", a);

	return 0;
}
