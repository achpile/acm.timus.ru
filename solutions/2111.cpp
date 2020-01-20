#include <stdio.h>
#include <math.h>
#include <cstdlib>
#include <climits>

int main() {
	unsigned long long int n;
	unsigned long long int i;
	unsigned long long int total  = 0;
	unsigned long long int result = 0;

	scanf("%llu\n", &n);

	unsigned long long int list[n];

	for (i = 0; i < n; i++) {
		scanf("%llu ", &list[i]);
		total += list[i];
	}


	std::qsort(list, n, sizeof(unsigned long long int), [](const void* a, const void* b)
	{
		int arg1 = *static_cast<const unsigned long long int*>(a);
		int arg2 = *static_cast<const unsigned long long int*>(b);

		return (arg1 > arg2) - (arg1 < arg2);
	});


	for (i = 0; i < n; i++) {
		result += (2 * total - list[i]) * list[i];
		total  -= list[i];
	}

	printf("%llu\n", result);

	return 0;
}
