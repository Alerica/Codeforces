// 1742A Sum
// Last Updte 15 oct 23

#include <stdio.h> 

int main(){
	int T, a, b, c;
	scanf("%d", &T);
	for(int i = 0;i < T; i++){
		scanf("%d %d %d", &a, &b, &c);
		if(a + b == c || a + c == b || a == b + c){
			printf("YES\n");
		} else printf("NO\n");
	}
	
	
	
	return 0;
}
