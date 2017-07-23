#include <stdio.h>
#include <math.h>
#include <vector>
#include <string.h>
#include <stdlib.h>

char a[1024];
int n;

bool letter(char c) {
	return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

void pr() {
	int i;

	if (!n) return;

	for (i = n; i > 0; i--)
		printf("%c", a[i-1]);

	n = 0;
}

int main() {
	char c;
	n = 0;

	while (fread(&c, 1, 1, stdin)) {
		if (letter(c)) {
			a[n] = c;
			n++;
		} else {
			pr();
			printf("%c", c);
		}
	}

	pr();

	return 0;
}
