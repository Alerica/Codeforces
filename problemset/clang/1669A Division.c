// 1669A Division
// 2 oct 23 Alexander Ricky B.

#include <stdio.h>

int main() {
	int testCase;
	scanf(" %d", &testCase);
	
	int a;
	for(int i = 0; i < testCase; i++){
		scanf(" %d", &a);
		if(a <= 1399) printf("Division 4\n");
		else if(a <= 1599) printf("Division 3\n");
		else if(a <= 1899) printf("Division 2\n");
		else printf("Division 1\n");
	}
}
