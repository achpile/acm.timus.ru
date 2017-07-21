#include <stdio.h>
#include <math.h>
#include <vector>

int main() {
	long int n, k, a, m, i;

	m = 0;
	scanf("%ld %ld\n", &k, &n);

	for (i = 0; i < n; i++) {
		scanf("%ld", &a);
		m += a - k;

		if (m < 0)
			m = 0;
	}

	printf("%ld\n", m);

	return 0;
}
