#include <stdio.h>
#include <vector>

int main() {
	std::vector<unsigned long long int> list;
	unsigned long long int n;
	unsigned long long int i;

	scanf("%llu", &n);

	while (n > 1) {
		i = n / 2;
		list.push_back(i);
		n -= i;
	}

	printf("%lu\n", list.size());
	for (i = 0; i < list.size(); i++)
		printf("%llu ", list[i]);
	printf("\n");

	return 0;
}
