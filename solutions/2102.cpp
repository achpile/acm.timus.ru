#include <stdio.h>
#include <math.h>
#include <cstdlib>
#include <climits>
#include <cmath>

bool is_prime(unsigned long long int x) {
	unsigned long long int s;
	unsigned long long int i;

	if (x % 2 == 0) return false;
	if (x % 3 == 0) return false;

	s = sqrt(x) / 6 + 1;

	for (i = 1; i <= s; i++) {
		if (x % (6*i - 1) == 0) return false;
		if (x % (6*i + 1) == 0) return false;
	}

	return true;
}

unsigned long long int update_s(unsigned long long int n, unsigned long long int result) {
	if (result < 19) return std::pow(n, 1.0/(20.0 - (float)result)) / 6 + 1;
	else             return sqrt(n) / 6 + 1;
}

int main() {
	unsigned long long int n;
	unsigned long long int i;
	unsigned long long int k;
	unsigned long long int s;
	int result = 0;

	scanf("%llu\n", &n);

	while (n % 2 == 0) {
		n /= 2;
		result++;
	}

	while (n % 3 == 0) {
		n /= 3;
		result++;
	}

	s = update_s(n, result);

	for (i = 1; (n != 1) && (i <= s); i++) {
		k = 6 * i - 1;
		while (n % k == 0) {
			n /= k;
			result++;
			s = update_s(n, result);
		}

		k = 6 * i + 1;
		while (n % k == 0) {
			n /= k;
			result++;
			s = update_s(n, result);
		}

		if (result > 20) {
			printf("No\n");
			return 0;
		}

		if (result == 19) {
			if (n == 1)           printf("No\n");
			else if (is_prime(n)) printf("Yes\n");
			else                  printf("No\n");
			return 0;
		}

	}

	if (n != 1) result++;

	if (result == 20) printf("Yes\n");
	else              printf("No\n");

	return 0;
}
