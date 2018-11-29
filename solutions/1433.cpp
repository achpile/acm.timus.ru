#include <stdio.h>
#include <string.h>

void rotate(char *str) {
	char i = str[1];
	str[1] = str[2];
	str[2] = str[3];
	str[3] = i;
}

void swap(char *str, int base) {
	char tmp[5];
	strcpy(tmp, str);

	switch (base) {
		case 1:
			str[0] = tmp[0];
			str[1] = tmp[1];
			str[2] = tmp[2];
			str[3] = tmp[3];
			break;

		case 2:
			str[0] = tmp[1];
			str[1] = tmp[3];
			str[2] = tmp[2];
			str[3] = tmp[0];
			break;

		case 3:
			str[0] = tmp[2];
			str[1] = tmp[1];
			str[2] = tmp[3];
			str[3] = tmp[0];
			break;

		case 4:
			str[0] = tmp[3];
			str[1] = tmp[2];
			str[2] = tmp[1];
			str[3] = tmp[0];
			break;
	}
}

int main() {
	char a[5], b[5], c[5];
	int i,j;

	scanf("%s\n", a);
	scanf("%s\n", b);

	for (j = 1; j <= 4; j++) {
		strcpy(c, a);
		swap(c, j);

		for (int i = 0; i < 3; i++) {
			if (!strcmp(c, b)) {
				printf("equal\n");
				return 0;
			}

			rotate(c);
		}
	}

	printf("different\n");
	return 0;
}
