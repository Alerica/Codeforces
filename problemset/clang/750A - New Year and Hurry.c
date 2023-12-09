// 750A - New Year and Hurry
// 9 Nov 23 Alexander Ricky B.

#include <stdio.h> 

int main() {
	
	int time = 240; // 240 minute 20:00 - 24:00 
	int drive = 0; // time for driving to the party
	int problems = 0, solved = 0;
	scanf("%d %d", &problems, &drive);
	time -= drive;
	int i = 1;
	while(problems > 0 ){
		time -= 5 * i;
		i++;
		if(time < 0) break;
		solved++;
		problems--;
		//printf("time remaining : %d\n", time);
	}
	
	printf("%d\n", solved);
}
