// 4A - Watermelon
// Last update 2 Oct 23 by Alexander R. B.

#include <stdio.h>

int main() {
	
	int num;
	scanf("%d", &num);
	if(num % 2 == 0 && num > 2) {
		printf("YES");
	} else {
		printf("NO");
	}
	
	return 0;
}
