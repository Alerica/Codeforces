// 112A Petya and Strings
// 20 oct 23 Alexander R. B

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	
	char text[101], text2[101];
	scanf("%s", text);
	getchar();
	scanf("%s", text2);
	getchar();
	
	for(int i = 0; i < strlen(text); i++) {
		text[i] = toupper(text[i]);
		text2[i] = toupper(text2[i]);
	}
	
	if(strcmp(text, text2) == 0) printf("0\n");
	else if(strcmp(text, text2) > 0) printf("1\n");
	else printf("-1\n");
}
