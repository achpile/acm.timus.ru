#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int n, i;
	int e, m, l;
	char line[128];

	scanf("%d\n", &n);

	e = 0;
	m = 0;
	l = 0;

	for (i = 0; i < n; i++) {
		gets(line);

		switch (line[0]) {
			case 'E': e++; break;
			case 'M': m++; break;
			case 'L': l++; break;
		}
	}

	     if (e > m && e > l) printf("Emperor Penguin\n" );
	else if (m > e && m > l) printf("Macaroni Penguin\n");
	else if (l > m && l > e) printf("Little Penguin\n"  );

	return 0;
}
