// 41A Translation 
// Last Update 14 oct 23 Alexander R. B

#include <stdio.h>
#include <string.h>

int main(){
	
	char original_text[101] ={'0'}, text[101]={'0'}, reversed_text[101]={'0'};
	scanf("%[^\n]", original_text);
	getchar();
	scanf("%[^\n]", text);


	for(int i = 0; i < strlen(text);i++){
		reversed_text[i] = text[strlen(original_text)-1-i];
	}

	
	if(strcmp(original_text, reversed_text) == 0) {
		printf("YES\n");
	}	else if (original_text, reversed_text!= 0){
		printf("NO\n");
	}
}
