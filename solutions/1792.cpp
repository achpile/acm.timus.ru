#include <stdio.h>

int a[7];

bool check() {
	return ((a[1] + a[2] + a[3]) % 2 == a[4]) &&
	       ((a[0] + a[2] + a[3]) % 2 == a[5]) &&
	       ((a[0] + a[1] + a[3]) % 2 == a[6]);
}

void swap(int i) {
	if (a[i]) a[i] = 0;
	else      a[i] = 1;
}

int main() {
	int i;

	for (i = 0; i < 7; i++)
		scanf("%d", &a[i]);

	for (i = -1; i < 7; i++) {
		if (i != -1) swap(i);
		if (check()) break;
		if (i != -1) swap(i);
	}

	for (i = 0; i < 7; i++)
		printf("%d ", a[i]);

	printf("\n");

	return 0;
}
