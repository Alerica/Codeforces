// 705A Hulk
// Last Update 11 oct 23 by Alexander R. B.

#include <stdio.h>

int main() {
	
	int a, i;
	scanf("%d", &a);
	for(i = 0; i < a; i++){
		if(i%2 == 0 && !(i == a-1)) {
			printf("I hate that ");
		} else if (i%2 == 1 && !(i == a-1)) {
			printf("I love that ");
		} else if (i%2 == 0) {
			printf("I hate it\n");
		} else if (i%2 == 1) {
			printf("I love it\n");
		}	
	}

	
	return 0;
}
