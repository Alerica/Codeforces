// 282A Bit++
// lastt update 10 oct 23 by Alexander R. B.

#include <stdio.h>
#include <string.h>

int main() {
	
	int a, i, j, num;
	char bit[5];
	scanf("%d", &a);
	for(i = 0; i < a; i++){
		scanf(" %s", bit);
		strlwr(bit);
		for(j = 0;j < 5;j++){
				if(bit[j] == 'x' && bit[j+1] == '+' && bit[j+2] == '+'  ){
					num++;
					break;
				} else if (bit[j] == 'x' && bit[j+1] == '-' && bit[j+2] == '-'  ) {
					num--;
					break;
				} else if (bit[j] == '+' && bit[j+1] == '+' && bit[j+2] == 'x'  ) {
					num++;
					break;
				} else if (bit[j] == '-' && bit[j+1] == '-' && bit[j+2] == 'x'  ) {
					num--;
					break;
				}
		}
	
	}
	printf("%d\n", num);
	
	return 0;
	
}
