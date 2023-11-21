// Vanya and Cubes
// 21 Nov 23 Alexander Ricky B.

#include <stdio.h>

int main() {
	int minimum = 1, n, count = 0;
	scanf(" %d", &n);
	getchar();
	
	int i = 1;
	do {
		minimum = ((i*i) + i)/2;
		if(!(minimum <= n)) break;
		
		n -= minimum;
		
		count++;
		i++;
		
	} while (minimum <= n);
	
	printf("%d\n",count);
}
