// 791A Bear and Big Brother
// Last Update 11 oct 23 by Alexander R. B.

#include <stdio.h>

int main() {
	
	int a, b, count = 0;
	scanf("%d %d", &a, &b);
	while(a <= b){
		count++;
		a*=3;
		b*=2;
		
	}
	printf("%d\n", count);
	
	return 0;
}
