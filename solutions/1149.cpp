#include <stdio.h>
#include <string>
#include <sstream>

std::string a(int n) {
	int i;
	std::string res = "sin(" + std::to_string(n) + ")";

	for (i = n - 1; i > 0; i--)
		if (i % 2) res = "sin(" + std::to_string(i) + "-" + res + ")";
		else       res = "sin(" + std::to_string(i) + "+" + res + ")";

	return res;
}

int main() {
	int n, i;
	std::string str;

	scanf("%d", &n);

	str = a(1) + "+" + std::to_string(n);

	for (i = 1; i < n; i++)
		str = "(" + str + ")" + a(i + 1) + "+" + std::to_string(n - i);

	printf("%s\n", str.c_str());

	return 0;
}
