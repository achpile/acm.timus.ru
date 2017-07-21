#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <vector>

int getPos(char letter) {
	switch (letter) {
		case 'A': return 0;
		case 'P': return 0;
		case 'O': return 0;
		case 'R': return 0;

		case 'B': return 1;
		case 'M': return 1;
		case 'S': return 1;
	}

	return 2;
}

int main() {
	int n, x1, x2, i, c;
	char name[32];

	x1 = 0;
	c  = 0;
	scanf("%d\n",&n);

	for (i = 0; i < n; i++) {
		scanf("%s\n", name);
		x2 = getPos(name[0]);
		c += abs(x2 - x1);
		x1 = x2;
	}

	printf("%d\n", c);
	return 0;
}
