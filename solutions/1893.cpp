#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char a[4];
	int c, r;

	scanf("%s", a);

	r = atoi(a);

	switch (a[strlen(a) - 1]) {
		case 'A': c = 1;  break;
		case 'B': c = 2;  break;
		case 'C': c = 3;  break;
		case 'D': c = 4;  break;
		case 'E': c = 5;  break;
		case 'F': c = 6;  break;
		case 'G': c = 7;  break;
		case 'H': c = 8;  break;
		case 'J': c = 9;  break;
		case 'K': c = 10; break;
	}

	if (r < 3) {
		if (c == 1 || c == 4) printf("window\n");
		else                  printf("aisle\n");
	} else if (r < 21) {
		if (c == 1 || c == 6) printf("window\n");
		else                  printf("aisle\n");
	} else {
		     if (c == 1 || c == 10)                    printf("window\n");
		else if (c == 2 || c == 5 || c == 6 || c == 9) printf("neither\n");
		else                                           printf("aisle\n");
	}

	return 0;
}
