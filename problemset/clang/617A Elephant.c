// 617A Elephant
// 23 Nov 23 Alexander Ricky Budianto

#include <stdio.h>

int main() {
	int x = 0;
	scanf(" %d", &x);
	getchar();
	
	int step;
	while(x != 0) {
		if(x >= 5) {
			x -= 5;
			step++;
		} else if (x >= 4) {
			x -= 4;
			step++;
		} else if (x >= 3) {
			x -= 3;
			step++;
		} else if (x >= 2) {
			x -= 2;
			step++;
		} else if (x >= 1) {
			x -= 1;
			step++;
		}
	}
	
	printf("%d\n", step);
}
