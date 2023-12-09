// 486A - Calculating Function
// 9 Nov 23 Alexander Ricky B.

#include <stdio.h> 

// f(n)		1	2	3	4	5
// output	-1	1	-2	2	-3

int main() {
	long long input;
	scanf("%lld", &input);
	double temp = 0;
	temp = ceil((double)input / 2);
	
	if(input % 2 == 0) {
		printf("%lld\n", (long long)temp);
	} else {
		printf("%lld\n", (long long)(temp * -1));
	}
	// output must be integer so even %.0lf will result wrong answer.
	
}



