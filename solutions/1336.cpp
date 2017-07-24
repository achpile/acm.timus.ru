#include <stdio.h>
#include <string.h>
#include <math.h>
#include <vector>

int main() {
	unsigned long long n, i, x, y;
	std::vector<unsigned long long> list;

	scanf("%llu\n", &n);

	for (i = 2; i < n / 2 + 1; i++)
		while (n % i == 0) {
			list.push_back(i);
			n /= i;
		}

	list.push_back(n);

	x = 1;
	y = 1;

	for (i = 0; i < list.size(); i++) {
		if (i < list.size() - 1 && list[i] == list[i+1]) {
			i++;
			x *= list[i];
		} else {
			x *= list[i];
			x *= list[i];
			y *= list[i];
		}
	}

	printf("%llu\n%llu\n", x, y);

	return 0;
}
