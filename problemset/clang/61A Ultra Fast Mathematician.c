// 486A - Calculating Function
// 9 Nov 23 Alexander Ricky B.

#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

int main() {
	char num1[101];
	char num2[101];
	scanf("%s", num1);
	getchar();
	scanf("%s", num2);

	char num[101];
	for(int i = 0; i < strlen(num1);i++){
		if(num1[i] == num2[i]) {
			num[i] = '0';
		} else {
			num[i] = '1';
		}
	}
	
	//printf("%s\n", num);
	
	// Output must be int (%d) cant just print %s
	for(int i = 0; i < strlen(num1); i++) {
		printf("%d", num[i] - '0');
	}
	printf("\n");
}

