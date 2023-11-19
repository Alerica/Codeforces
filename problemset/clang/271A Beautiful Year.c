// 271A Beautiful Year
// 31 oct 23 Alexander Ricky Budianto

#include <stdio.h>

int main() {
	int year_input = 0;
	scanf("%d", &year_input);
	
	int digit_1 = 0;
	int digit_2 = 0;	
	int digit_3 = 0;
	int digit_4 = 0;
	
	int i = year_input + 1;
	while(1) {
		digit_1 = i / 1000;
		digit_2 = i % 1000 / 100;
		digit_3 = i % 100 / 10 ;
		digit_4 = i % 10;
		if(digit_1 != digit_2 && digit_1 != digit_3 && digit_1 != digit_4 && digit_2 != digit_3 && digit_2 != digit_4 && digit_3 != digit_4) {
			printf("%d%d%d%d", digit_1, digit_2, digit_3, digit_4);
			break;
		}
		i++;
		
	}
	printf("\n");
	
	
	
	
	return 0;
}
