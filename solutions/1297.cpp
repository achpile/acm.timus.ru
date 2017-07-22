#include <stdio.h>
#include <string.h>
#include <math.h>

char a[1024];

bool check(int i, int j) {
	int k;

	for (k = 0; k < (j - i) / 2 + 1; k++)
		if (a[i+k] != a[j-k])
			return false;

	return true;
}

int main() {
	int i, j, l;
	int mi, mj, m;

	scanf("%s\n", a);

	m  = 0;
	mi = 0;
	mj = 0;
	l  = strlen(a);

	for (i = 0; i < l; i++)
		for (j = l - 1; j > i && j - i + 1 > m; j--)
			if (a[i] == a[j])
				if (check(i, j)) {
					mi = i;
					mj = j;
					m  = j - i + 1;
				}

	for (i = mi; i <= mj; i++)
		printf("%c", a[i]);

	printf("\n");

	return 0;
}
