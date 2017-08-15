#include <stdio.h>
#include <ctype.h>
#include <string.h>

char w1[128], w2[128], w3[128];
int f;

void print() {
	if (!f)
		w1[0] = toupper(w1[0]);

	f = 1;

	printf("%s %s %s", w1, w2, w3);
}

int main() {
	char c;
	int i1, i2, i3, f1, f2, f3, jc;

	i1 = 0;
	i2 = 0;
	i3 = 0;
	f  = 0;
	jc = 0;

	while ((c = getchar()) != EOF) {
		if (c == '\n') break;

		c = tolower(c);

		if (c == '{') {f1 = 1; jc = 0; continue;}
		if (c == '(') {f2 = 1; jc = 0; continue;}
		if (c == '[') {f3 = 1; jc = 0; continue;}

		if (c == '}') {f1 = 2; w1[i1] = 0; i1 = 0; continue;}
		if (c == ')') {f2 = 2; w2[i2] = 0; i2 = 0; continue;}
		if (c == ']') {f3 = 2; w3[i3] = 0; i3 = 0; continue;}

		if (f1 == 1) {w1[i1++] = c; continue;}
		if (f2 == 1) {w2[i2++] = c; continue;}
		if (f3 == 1) {w3[i3++] = c; continue;}

		if (c == ',') {print(); jc = 1;}
		if (jc) printf("%c", c);
	}

	if (f1) print();

	return 0;
}
