#include <stdio.h>

char x[5][5], a[5][5];

char getX(int i, int j, int l) {
	if (l == 0) return x[i][j];
	if (l == 1) return x[3-j][i];
	if (l == 2) return x[3-i][3-j];
	if (l == 3) return x[j][3-i];
}

int main() {
	char pass[128];
	int i, j, k, l;

	for (i = 0; i < 4; i++)
		scanf("%s\n", x[i]);

	for (i = 0; i < 4; i++)
		scanf("%s\n", a[i]);

	k = 0;

	for (l = 0; l < 4; l++)
		for (int i = 0; i < 4; i++)
			for (int j = 0; j < 4; j++)
				if (getX(i, j, l) == 'X') {
					pass[k] = a[i][j];
					k++;
				}

	pass[k] = 0;
	printf("%s\n", pass);

	return 0;
}
