#include <stdio.h>
#include <math.h>
#include <vector>

int main() {
	int    i;
	double a;
	std::vector<double> list;

	while (scanf("%lf", &a) != EOF)
		list.push_back(sqrt(a));

	for (i = list.size() - 1; i >= 0; i--)
		printf("%.4lf\n", list[i]);

	return 0;
}
