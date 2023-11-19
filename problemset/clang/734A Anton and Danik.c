// 734A Anton and Danik
// 27 oct 23 Alexander Ricky B


#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    getchar();

    char array[n+1];
    fgets(array, sizeof(array), stdin);

    int a = 0;
    int d = 0;

    for(int i = 0; i < n; i++) {
        if(array[i] == 'A') {
            a++;
        } else if (array[i] == 'D') {
            d++;
        } 
    }

    if(a > d) {
        printf("Anton\n");
    } else if(d > a) {
        printf("Danik\n");
    } else {
        printf("Friendship\n");
    }

    return 0;
}


