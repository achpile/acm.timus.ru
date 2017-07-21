#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <vector>
#include <string>
#include <sstream>
#include <iostream>

int main() {
	int n, i, c, f, j;
	long long int t;
	std::vector<std::string> list;
	std::string s;

	scanf("%d\n", &n);
	c = 0;

	for (i = 0; i < n; i++) {
		f = 0;
		std::getline(std::cin, s);

		for (j = 0; j < list.size(); j++)
			if (!strcmp(list[j].c_str(), s.c_str())) {
				f = 1;
				c++;
				break;
			}

		if (!f)
			list.push_back(s);
	}

	printf("%d\n", c);

	return 0;
}
