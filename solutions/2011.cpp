#include <stdio.h>
#include <math.h>

int main() {
	int n, k, f1, f2, f3, i;
	int a[100];

	scanf("%d\n", &n);

	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);

	if (n < 3) {
		printf("No\n");
		return 0;
	}

	if (n > 5) {
		k = a[0];

		for (i = 1; i < n; i++)
			if (a[i] != k) {
				printf("Yes\n");
				return 0;
			}

		printf("No\n");
		return 0;
	}

	f1 = 0;
	f2 = 0;
	f3 = 0;

	for (i = 0; i < n; i++) {
		if (a[i] == 1) f1++;
		if (a[i] == 2) f2++;
		if (a[i] == 3) f3++;
	}

	if (n == 3) {
		if (f1 && f2 && f3) {
				printf("Yes\n");
				return 0;
		} else {
				printf("No\n");
				return 0;
		}
	}

	if ((f1 + f2 <= 1) || (f1 + f3 <= 1) || (f2 + f3) <= 1)
		printf("No\n");
	else
		printf("Yes\n");

	return 0;
}
