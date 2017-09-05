#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>

int main() {
	int year, n, q, i, k;
	unsigned int j;
	std::vector<std::string> list;
	std::string str1, str2;;

	scanf("%d %d %d\n", &year, &n, &q);

	for (i = 0; i < n; i++) {
		std::getline(std::cin, str1);
		str2 = str1.substr(0, str1.find("#"));

		k = 0;

		for (j = 0; j < list.size(); j++) {
			if (list[j] == str2) {
				k = 1;
				break;
			}
		}

		if (k) continue;

		if (list.size() == q) {
			printf("%s\n", str1.c_str());
			return 0;
		}

		list.push_back(str2);
	}

	return 0;
}
