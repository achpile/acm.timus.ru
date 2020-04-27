#include <stdio.h>

int main() {
	char c, s[81];
	int idx = 0;

	for (idx = 0; idx < 80; idx++) s[idx] = ' ';
	s[80] = 0;
	idx   = 0;

	while (scanf("%c", &c) != EOF) {
		if (c == '\n' || c == '\r')
			continue;

		     if (c == '<') idx--;
		else if (c == '>') idx++;
		else s[idx++] = c;

		if (idx == -1 || idx == 80) idx = 0;
	}

	printf("%s\n", s);

	return 0;
}
