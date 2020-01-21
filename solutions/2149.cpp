#include <stdio.h>
#include <algorithm>

int main() {
	int n, i;
	int t[4];

	scanf("%d\n", &n);

	int  dir[n];
	char pidgin[4];

	for (i = 0; i < n; i++) {
		scanf("%c%c%c%c", &pidgin[0], &pidgin[1], &pidgin[2], &pidgin[3]);

		if (pidgin[0] == '<') dir[i] = -1;
		else                  dir[i] =  1;

		scanf("%c", &pidgin[0]);
	}

	for (i = 0; i < 4; t[i++] = 0);

	for (i = 0; i < n; i++) {
		if (i % 2 == 0) if (dir[i] == -1) t[0]++;
		if (i % 2 == 1) if (dir[i] ==  1) t[0]++;

		if (i % 2 == 1) if (dir[i] == -1) t[1]++;
		if (i % 2 == 0) if (dir[i] ==  1) t[1]++;

		if (i <  n / 2) if (dir[i] == -1) t[2]++;
		if (i >= n / 2) if (dir[i] ==  1) t[2]++;

		if (i >= n / 2) if (dir[i] == -1) t[3]++;
		if (i <  n / 2) if (dir[i] ==  1) t[3]++;
	}

	printf("%d\n", std::min(t[0], std::min(t[1], std::min(t[2], t[3]))));

	return 0;
}
