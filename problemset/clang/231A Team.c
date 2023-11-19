// 231A Team
// 13 Oct 23 Alexander Ricky B.

#include<stdio.h>
int main(){

	int i,a,c,v,b, total=0;
	scanf("%d",&v);
	for(i=0;i<v;i++){
	    scanf("%d%d%d",&a,&b,&c);
	    if((a==1&&b==1&&c==1)||(a==0&&b==1&&c==1)||(a==1&&b==1&&c==0)||(a==1&&b==0&&c==1))
	        total++;
	}

    printf("%d",total);
    
	return 0;
}
