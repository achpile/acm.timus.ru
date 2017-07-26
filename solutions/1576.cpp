#include <stdio.h>
#include <math.h>
#include <vector>
#include <stdlib.h>

int main() {
	int n1, c1;
	int n2, t, c2;
	int n3;

	int k, i, m;
	int mm, ss;

	m = 0;

	scanf("%d %d\n", &n1, &c1);
	scanf("%d %d %d\n", &n2, &t, &c2);
	scanf("%d\n", &n3);
	scanf("%d\n", &k);

	for (i = 0; i < k; i++) {
		scanf("%d:%d\n", &mm, &ss);

		if (mm == 0 && ss <= 6) m += 0;
		else if (ss != 0)       m += mm + 1;
		else                    m += mm;
	}

	printf("Basic:     %d\n", n1 + m * c1);
	printf("Combined:  %d\n", n2 + ((m - t) > 0 ? (m - t) : 0) * c2);
	printf("Unlimited: %d\n", n3);

	return 0;
}
