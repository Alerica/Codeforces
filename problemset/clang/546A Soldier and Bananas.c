// 546A Soldier and Bananas
// 24 Nov 23 Alexander Ricky B.

#include <stdio.h>

int main() {
	int k, n, w;
	scanf(" %d %d %d", &k, &n, &w);
	
	int needed = 0;
	for(int i = 0; i < w; i++) {
		needed += k * (i + 1);
	}
	
	if(needed > n) printf("%d\n",needed - n);
	else printf("0\n");
	
}
