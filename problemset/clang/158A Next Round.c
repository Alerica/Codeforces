// 158A Next Round
// 16 0ct 23 Alexander Ricky B

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

int compare(const void*a, const void *b);

int main()
{
    int n, k, i, p=0;
    int x = 0, a;
    int t[100];
    scanf("%d %d", &n, &k);


    for(i=0; i<n; i++) scanf("%d", &t[i]);
    
    qsort(t, n, sizeof(int), compare);

    a = n-k;
	  p = t[a];

    for(i=0; i<n; i++) if(t[i]>=p && t[i]>0) x++;
    
    printf("%d\n", x);

    return 0;
}

int compare(const void *a, const void *b)
{
    return ( *(int*) a - *(int*) b);
}
