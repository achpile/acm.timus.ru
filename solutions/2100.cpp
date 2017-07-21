#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int n, i, r;
	char line[128];

	scanf("%d\n", &n);

	r = 2 + n;
	for (i = 0; i < n; i++) {
		scanf("%s\n", line);

		if (strstr(line, "+one"))
			r++;
	}

	if (r == 13) r++;

	printf("%d\n", r * 100);

	return 0;
}
