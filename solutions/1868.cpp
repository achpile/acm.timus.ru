#include <stdio.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <string>

std::vector<std::string> results;
std::vector<int> bets;

int check(const char *a) {
	int i;

	for (i = 0; i < 12; i++)
		if (!strcmp(a, results[i].c_str()))
			return 1;

	return 0;
}

int main() {
	char a[64], b[64], c[64];
	int n, i, t, j, r, m, s;

	for (i = 0; i < 4; i++) {
		scanf("%s\n", a);
		results.push_back(std::string(a) + " : gold");
	}

	for (i = 0; i < 4; i++) {
		scanf("%s\n", a);
		results.push_back(std::string(a) + " : silver");
	}

	for (i = 0; i < 4; i++) {
		scanf("%s\n", a);
		results.push_back(std::string(a) + " : bronze");
	}

	scanf("%d\n", &n);
	m = 0;
	s = 0;

	for (i = 0; i < n; i++) {
		r = 0;
		scanf("%d\n", &t);

		for (j = 0; j < t; j++) {
			scanf("%s\n", a);
			scanf("%s\n", b);
			scanf("%s\n", c);
			r += check((std::string(a) + " " + std::string(b) + " " + std::string(c)).c_str());
		}

		if (r > m)
			m = r;

		bets.push_back(r);
	}

	for (i = 0; i < n; i++)
		if (bets[i] == m) s++;

	printf("%d\n", 5*s);

	return 0;
}
