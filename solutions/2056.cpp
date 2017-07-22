#include <stdio.h>

int main() {
	int n, i, k, f1, f2;
	float s;

	f1 = 0;
	f2 = 1;
	s  = 0;
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d\n", &k);
		s += k;

		if (k != 5) f2 = 0;
		if (k == 3) f1 = 1;
	}

	     if (f1           ) printf("None\n");
	else if (f2           ) printf("Named\n");
	else if (s / n >= 4.5f) printf("High\n");
	else                    printf("Common\n");

	return 0;
}
