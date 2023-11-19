// 148A Insomnia Cure
// 18 Nov 23 Alexander Ricky B.

#include <stdio.h>

int main() {
	
	int k, l, m, n, d;
	scanf(" %d %d %d %d %d", &k, &l, &m, &n, &d);
	int count = 0;
	while(d > 0) {
		if(d % k == 0 || d % l == 0 || d % m == 0 || d % n == 0 ) count++;
		d--;
	}
	
	printf("%d\n", count);
}
