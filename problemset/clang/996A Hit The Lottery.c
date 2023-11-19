// 996A Hit The Lottery
// 6 nov 23 Alexander Ricky B.

#include <stdio.h>

int main(){
	
	long long n;
	scanf("%lld", &n);
	
	long long count = 0;
	while(n >= 100) {
		count++;
		n-=100;
	} 
	while(n >= 20) {
		count++;
		n-=20;
	} 
	while(n >= 10) {
		count++;
		n-=10;
	} 
	while(n >= 5) {
		count++;
		n-=5;
	} 
	while(n >= 1) {
		count++;
		n-=1;
	} 
	printf("%lld\n",count);
	
	
	
	

}
