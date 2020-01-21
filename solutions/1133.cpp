#include <stdio.h>

void get_k(long long int *k1, long long int *k2, long long int diff) {
	long long int t1, t2, t3, i;

	t1 = 1;
	t2 = 1;
	t3 = 2;

	for (i = 0; i < diff - 2; i++) {
		t1 = t2;
		t2 = t3;
		t3 = t1 + t2;
	}

	*k1 = t1;
	*k2 = t2;
}


int main() {
	long long int i, fi, fi1, j, fj, n, fn;
	long long int t, k, k1, k2; 

	scanf("%lld %lld %lld %lld %lld", &i, &fi, &j, &fj, &n);

	if (i > j) {
		t = i;
		i = j;
		j = t;

		t  = fi;
		fi = fj;
		fj = t ;
	}


	if (j - i == 1) {
		fi1 = fj;
	} else {
		get_k(&k1, &k2, j - i);
		fi1 = (int)((double(fj) / double(k2) - (double)k1 / (double)k2 * (double)fi));
	}

	if (i == n) {
		fn = fi;
	} else if (j == n) {
		fn = fj;
	} else if (i + 1 == n) {
		fn = fi1;
	} else if (i < n) {
		fn = fi + fi1;

		for (t = i; t + 2 != n; t++) {
			fi  = fi1;
			fi1 = fn;
			fn  = fi + fi1;
		}
	} else {
		fn = fi1 - fi;

		for (t = i - 1; t != n; t--) {
			fi1 = fi;
			fi  = fn;
			fn  = fi1 - fi;
		}
	}

	printf("%lld\n", fn);

	return 0;
}
