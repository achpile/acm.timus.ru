#include <stdio.h>
#include <string.h>

char a[3000];
int  n;

bool check() {
	int i;

	for (i = 0; i < n / 2 + 1; i++)
		if (a[i] != a[n-i-1])
			return false;

	return true;
}

int main() {
	int i,j;

	scanf("%s\n", a);

	n = strlen(a);
	i = n-1;

	while (!check()) {
		while (i >= 0 && a[i] == a[n-i-1]) i--;

		if (i == 0) {
			i = n - 1;
			continue;
		}

		if (a[i] < a[n-i-1]) {
			a[i] = a[n-i-1];
		} else {
			a[i] = a[n-i-1];
			a[i-1]++;

			j = i - 1;
			while (j>0 && a[j] > '9') {
				a[j] -= 10;
				a[j-1]++;
				j--;
			}
		}
	}

	printf("%s\n", a);

	return 0;
}
