#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int main() {
	char c;

	double x, y, s;

	s = sqrt(2.0f) / 2.0f;
	x = 0;
	y = 0;

	while ((c = getchar()) != EOF) {
		if (c == '1') {x -= s; y -= s;}
		if (c == '2')  y -= 1;
		if (c == '3') {x += s; y -= s;}
		if (c == '4')  x -= 1;
		if (c == '5')  continue;
		if (c == '6')  x += 1;
		if (c == '7') {x -= s; y += s;}
		if (c == '8')  y += 1;
		if (c == '9') {x += s; y += s;}
		if (c == '0')  break;
	}

	printf("%.10lf %.10lf\n", x, y);

	return 0;
}
