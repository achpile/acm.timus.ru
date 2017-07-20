#include <stdio.h>
#include <string.h>

int main() {
	char a[64];
	int  n[64];
	int  l, i;

	scanf("%s", a);

	l = strlen(a);
	for (i = 0; i < l; i++)
		n[i] = a[i] - 48;

	for (i = 0; i < l - 1; i++) {
		if (n[i] >= 7) n[i] -= 7;
		while (n[i]) {
			if (n[i + 1] >= 7) n[i + 1] -= 7;
			n[i]--;
			n[i+1] += 3;
		}
	}

	if (n[l - 1] >= 7) n[l - 1] -= 7;
	printf("%d\n", n[l - 1]);

	return 0;
}
