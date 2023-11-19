//1703A YES or YES?
// 1 Nov 23 Alexander Ricky B.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

 int main() {
 	
 	int testCase = 0;
 	scanf("%d", &testCase);
 	char text[4];
 	
 	for(int i = 0; i < testCase; i++) {
 		scanf(" %s", text);
 		getchar();
 		
 		for(int j = 0; j < 4; j++) {
 			text[j] = toupper(text[j]);
		 }
		 
		 if(strcmp(text,"YES")) printf("NO\n");
		 else printf("YES\n");
	}
 	return 0;
 }
