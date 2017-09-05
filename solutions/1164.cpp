#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
	int letters[100];
	int i, n, m, p, j;
	char str[32];


	for (i = 'A'; i <= 'Z'; i++)
		letters[i] = 0;

	scanf("%d %d %d\n", &n, &m, &p);

	for (i = 0; i < n; i++) {
		scanf("%s\n", str);

		for (j = 0; j < strlen(str); j++)
			letters[str[j]]++;
	}

	for (i = 0; i < p; i++) {
		scanf("%s\n", str);

		for (j = 0; j < strlen(str); j++)
			letters[str[j]]--;
	}

	for (i = 'A'; i <= 'Z'; i++)
		for (j = 0; j < letters[i]; j++)
			printf("%c", i);

	printf("\n");

	return 0;
}
