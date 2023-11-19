// 1328A Divisbilty Problem
// 14 November 2023 Alexander Ricky B.

#include <stdio.h>

int main() {
	
	int testCase;
	scanf("%d", &testCase);
	int num1, num2, move;
	
	for(int i = 0; i < testCase; i++) {
		scanf("%d %d", &num1, &num2);
		move = (num2 - num1 % num2) % num2;
        printf("%d\n", move);
	}
	
}
