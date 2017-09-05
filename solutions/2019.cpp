#include <stdio.h>
#include <ctype.h>
#include <vector>

struct entity {
	int  index;
	char c;
	bool ghost;
};

int main() {
	int i, n;
	int gh, hu;
	char c;
	entity t;
	bool d;
	std::vector<entity> list;
	int ans[5001];

	gh = 1;
	hu = 1;

	scanf("%d\n", &n);

	for (i = 0; i < 2*n; i++) {
		scanf("%c", &c);

		if (c >= 'A' && c <= 'Z') {
			t.ghost = false;
			t.c     = tolower(c);
			t.index = gh++;
		} else {
			t.ghost = true;
			t.c     = tolower(c);
			t.index = hu++;
		}

		list.push_back(t);
	}

	d = true;

	while (d) {
		d = false;

		for (i = 0; i < (int)list.size() - 1; i++) {
			if (list[i].c == list[i+1].c && list[i].ghost != list[i+1].ghost) {
				d = true;

				if (!list[i].ghost) ans[list[i  ].index] = list[i+1].index;
				else                ans[list[i+1].index] = list[i  ].index;

				list.erase(list.begin() + i);
				list.erase(list.begin() + i);
				break;
			}
		}
	}

	if (!list.size()) {
		for (i = 1; i <= n; i++) printf("%d ", ans[i]);
		printf("\n");
	} else {
		printf("Impossible\n");
	}

	return 0;
}
