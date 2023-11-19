// 71A WayTooLongWords
// last updated 2 oct 23 by Alexander R. B.

#include <stdio.h>
#include <string.h>

int main() {
	
	
	int n;
	scanf("%d", &n);
	
	int i = 0;
	char user_text[101];
	for(i; i < n; i++) {
		
		
		scanf("%s", user_text);
		getchar();
	
		if(strlen(user_text) > 10) {
			printf("%c%d%c\n", user_text[0], strlen(user_text) - 2, user_text[strlen(user_text) - 1]);
		} else {
			printf("%s\n", user_text);
		}
			
	}
	
	
	return 0;
}
