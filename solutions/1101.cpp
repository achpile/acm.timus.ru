#include <stdio.h>
#include <string.h>
#include <vector>
#include <algorithm>

std::vector<char> polish;
std::vector<char> tmp;
bool vars['Z' + 1];

bool calc() {
	bool a,b;
	tmp.clear();

	for (unsigned int i = 0; i < polish.size(); i++) {
		if (polish[i] >= 'A' && polish[i] <= 'Z')
			tmp.push_back(vars[polish[i]]);

		if (polish[i] == '0')
			tmp.push_back(false);

		if (polish[i] == '1')
			tmp.push_back(true);

		if (polish[i] == '#') {
			a = tmp.back();
			tmp.pop_back();
			tmp.push_back(!a);
		}

		if (polish[i] == '+') {
			a = tmp.back();
			tmp.pop_back();
			b = tmp.back();
			tmp.pop_back();
			tmp.push_back(a||b);
		}

		if (polish[i] == '*') {
			a = tmp.back();
			tmp.pop_back();
			b = tmp.back();
			tmp.pop_back();
			tmp.push_back(a&&b);
		}
	}

	return tmp.back();
}

void read_polish(const char* expr) {
	tmp.clear();

	for (int i = 0; i < strlen(expr); i++) {
		if (expr[i] == ' ')
			continue;

		if (expr[i] == '(') {
			tmp.push_back('(');
			continue;
		}

		if (expr[i] == ')') {
			while (tmp.size() && tmp.back() != '(') {
				polish.push_back(tmp.back());
				tmp.pop_back();
			}

			if (tmp.size()) tmp.pop_back();
			continue;
		}

		if (!strncmp(&expr[i], "OR", 2)) {
			while (tmp.size() && (tmp.back() == '#' || tmp.back() == '*' || tmp.back() == '+')) {
				polish.push_back(tmp.back());
				tmp.pop_back();
			}

			tmp.push_back('+');
			i+=1;
			continue;
		}

		if (!strncmp(&expr[i], "AND", 3)) {
			while (tmp.size() && (tmp.back() == '#' || tmp.back() == '*')) {
				polish.push_back(tmp.back());
				tmp.pop_back();
			}

			tmp.push_back('*');
			i+=2;
			continue;
		}

		if (!strncmp(&expr[i], "NOT", 3)) {
			tmp.push_back('#');
			i+=2;
			continue;
		}

		if (!strncmp(&expr[i], "TRUE", 4)) {
			tmp.push_back('1');
			i+=3;
			continue;
		}

		if (!strncmp(&expr[i], "FALSE", 5)) {
			tmp.push_back('0');
			i+=4;
			continue;
		}

		if (expr[i] >= 'A' && expr[i] <= 'Z')
			polish.push_back(expr[i]);
	}

	while (tmp.size()) {
		polish.push_back(tmp.back());
		tmp.pop_back();
	}
}

struct field {
	bool cross;
	bool swap['Z' + 1];

	field() {
		cross = false;
		for (char c = 'A'; c <= 'Z'; swap[c++] = false);
	};
};

int main() {
	char expr[256];
	int  n,m,k;
	int  x, y, dx, dy, t;

	scanf("%[^\n]s", expr);
	scanf("%d %d %d\n", &n, &m, &k);

	field grid[2*n+1][2*n+1];
	x = y = n;
	dx = 1;
	dy = 0;

	for (char c = 'A'; c <= 'Z'; c++)
		vars[c] = false;

	read_polish(expr);

	for (int i = 0; i < m; i++) {
		int a,b;
		scanf("%d %d\n", &a, &b);
		grid[a+n][b+n].cross = true;
	}

	for (int i = 0; i < k; i++) {
		int a,b;
		char c;
		scanf("%d %d %c\n", &a, &b, &c);
		grid[a+n][b+n].swap[c] = true;
	}

	while (1) {
		printf("%d %d\n", x - n, y - n);

		for (char c = 'A'; c <= 'Z'; c++)
			if (grid[x][y].swap[c])
				vars[c] = !vars[c];

		if (grid[x][y].cross) {
			if (!calc()) {
				t  = dy;
				dy = dx;
				dx = -t;
			} else {
				t  = dx;
				dx = dy;
				dy = -t;
			}
		}

		x += dx;
		y += dy;

		if (x < 0 || x > 2*n || y < 0 || y > 2*n) break;
	}

	return 0;
}
