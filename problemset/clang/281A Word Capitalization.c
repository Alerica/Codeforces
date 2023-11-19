// 281A Word Capitalization
// last update 10 oct 23 by Alexander R. B.

#include <stdio.h>
#include <ctype.h>

int main() {
	
	char text[1001];
	scanf("%s", text);
	text[0] = toupper(text[0]);
	
	printf("%s\n", text);
	return 0;
}
