// 263A Beautiful Matrix
// 3 oct 23 Alexander Ricky B.

#include <stdio.h>

int main(){
	int matrix[5][5] = {{0,0,0,0,0},
						{0,0,0,0,0},
						{0,0,0,0,0},
						{0,0,0,0,0},
						{0,0,0,0,0}};
						
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5; j++) {
			scanf(" %d", &matrix[i][j]);
		}
	}



	int position_x = 2, position_y = 2;
	
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5; j++) {
			if(matrix[i][j] == 1) {
				position_y = i;
				position_x = j;
			}
		}
	}

	int step = 0;
	while(position_x != 2 ||position_y != 2) {
		if(position_x > 2) {
			position_x--;
			step++;
		} else if (position_x < 2) {
			position_x++;
			step++;
		}
	

	
		if(position_y > 2) {
			position_y--;
			step++;
		} else if (position_y < 2) {
			position_y++;
			step++;
		}
	} 
	
	printf("%d\n", step);
}
