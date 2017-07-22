#include <stdio.h>

int main() {
	int n, i;

	scanf("%d", &n);

	if (n > 4) printf("Glupenky Pierre\n");
	else {
		for (i = 0; i < n; i++)
			switch (i) {
				case 0: printf("11 "); break;
				case 1: printf("01 "); break;
				case 2: printf("60 "); break;
				case 3: printf("80 "); break;
			}

		printf("\n");
	}

	return 0;
}
