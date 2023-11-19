// 344A Magnets
// 27 oct 23 Alexander Ricky B


#include <stdio.h>

int main() {
	
	int magnets, magnet_counter = 1, magnet_temp, magnet_now;
	scanf("%d", &magnets);
	scanf("%d", &magnet_temp);
	for(int i = 0; i < magnets - 1; i++) {
		scanf("%d", &magnet_now);
		if(magnet_temp == 1 && magnet_now != 1) {
			magnet_counter++;
			magnet_temp = magnet_now;
		} else if(magnet_temp == 10 && magnet_now != 10) {
			magnet_counter++;
			magnet_temp = magnet_now;
		}
	}
	
	printf("%d", magnet_counter);
	
	
}
