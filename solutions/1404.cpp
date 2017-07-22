#include <stdio.h>
#include <string.h>

int main() {
	char w[128];
	int  n, i, a[128];

	scanf("%s", w);

	n = strlen(w);

	for (i = 0; i < n; i++)
		a[i] = w[i] - 97;

	for (i = n - 1; i > 0; i--) {
		a[i] -= a[i-1];

		if (a[i] < 0)
			a[i] += 26;
	}

	a[0] -= 5;
	if (a[0] < 0) a[0] += 26;

	for (i = 0; i < n; i++)
		w[i] = 97 + a[i];

	printf("%s\n", w);

	return 0;
}
