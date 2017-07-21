#include <stdio.h>
#include <string.h>

int main() {
	int i, d;
	char a[200001], c;

	i = 0;
	d = 0;

	while (fread(&c, 1, 1, stdin)) {
		if (c == '\n') break;

		if (i != 0 && c == a[i-1]) {
			i--;
		} else {
			a[i] = c;
			i++;
		}
	}

	a[i] = 0;
	printf("%s\n", a);

	return 0;
}
