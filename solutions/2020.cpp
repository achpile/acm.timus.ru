#include <stdio.h>
#include <string.h>

int main() {
	char a[1024], b[1024], a1, b1;
	int i, j, k, n1, n2;

	scanf("%s", a);
	scanf("%s", b);

	k  = 0;
	i  = 0;
	j  = 0;
	n1 = strlen(a);
	n2 = strlen(b);

	while (i < n1 || j < n2) {
		k++;

		if (i < n1) a1 = a[i];
		else        a1 = 0;

		if (j < n2) b1 = b[j];
		else        b1 = 0;

		if (a1 && (a1 == 'F' || a1 == 'R')) i++;
		if (b1 && (b1 == 'F' || b1 == 'R')) j++;

		if (a1 == 'L' && (!b1 || b1 == 'L')) i++;
		if (b1 == 'L' && (a1 == 0 || a1 == 'L')) j++;
	}

	printf("%d\n", k);

	return 0;
}
