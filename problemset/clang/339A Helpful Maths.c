// 339A Helpful Maths
// 23 Nov 23 Alexander Ricky B.

#include <stdio.h>
#include <stdio.h>
#include <string.h>

int main() {
    char input[101];
    scanf(" %s", input);
    
    
    int num[101];
    char *token = strtok(input, "+");
	int i = 0;
    while (token != NULL) {
        num[i] = *token - 48;
        token = strtok(NULL, "+");
        i++;
    }
    
    for(int j = 0; j < i - 1; j++){
    	for(int k = 0; k < i - 1; k ++){
    		if(num[k] > num[k+1]){
    			int temp = num[k];
    			num[k] = num[k+1];
    			num[k+1] = temp;
			}
		}
	}
	
	for(int j = 0; j < i; j++){
		printf("%d", num[j]);
		
		if(!(j == i - 1)) printf("+");
		
	}

    return 0;
}

