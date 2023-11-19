// 1807A Plus or Minus
// 2 oct 23 Alexander Ricky B.

#include <stdio.h>

int main() {
	int testCase;
	scanf(" %d", &testCase);
	
	int a = 0, b = 0, c = 0;
	int itsTrue = 0;
	
	for(int i = 0; i < testCase; i++) {
		scanf(" %d %d %d", &a, &b, &c);
		if(c == a + b) itsTrue++;
		//if(c == a - b) itsTrue++;
		if(itsTrue ==  1) printf("+\n");
		else printf("-\n");
	
		itsTrue = 0;
		
		
		
	}
}
