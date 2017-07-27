#include <stdio.h>
#include <math.h>
#include <vector>
#include <string>
#include <string.h>
#include <iostream>
#include <stdlib.h>

void line() {
	printf("+------------------------------+--------+-------------+\n");
};

int main() {
	int n, i, j;
	int k, t;

	std::string name, date;
	char tasks[14], res[32], task;

	line();
	printf("|%-30s|%-8s|%-13s|\n", "Contest name", "Date", "ABCDEFGHIJKLM");
	line();

	scanf("%d\n", &n);

	for (i = 0; i < n; i++) {
		std::getline(std::cin, name);
		std::getline(std::cin, date);

		scanf("%d %d\n", &t, &k);

		tasks[t] = 0;
		for (j = 0; j < t; j++) tasks[j] = '.';

		for (j = 0; j < k; j++) {
			scanf("%c %s\n", &task, res);
			task -= 65;

			if (!strcmp(res, "Accepted")) {
				tasks[task] = 'o';
			} else if (!strcmp(res, "Wrong")) {
				scanf("%s\n", res);
				if (tasks[task] != 'o')
					tasks[task]  = 'x';
			} else if (!strcmp(res, "Runtime")) {
				scanf("%s\n", res);
				if (tasks[task] != 'o')
					tasks[task]  = 'x';
			} else if (!strcmp(res, "Time")) {
				scanf("%s\n", res);
				scanf("%s\n", res);
				if (tasks[task] != 'o')
					tasks[task]  = 'x';
			} else if (!strcmp(res, "Memory")) {
				scanf("%s\n", res);
				scanf("%s\n", res);
				if (tasks[task] != 'o')
					tasks[task]  = 'x';
			} else if (!strcmp(res, "Compilation")) {
				scanf("%s\n", res);
				if (tasks[task] != 'o')
					tasks[task]  = 'x';
			}
		}

		printf("|%-30s|%-8s|%-13s|\n", name.c_str(), date.c_str(), tasks);
		line();
	}

	return 0;
}
