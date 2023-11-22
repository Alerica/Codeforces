// 9A Die Roll
// 23 Nov 23 Alexander Ricky B.

#include <stdio.h>

int main() {
    int Y, W;
    scanf("%d %d", &Y, &W);

     char probability[7][5] = {"", "1/1", "5/6", "2/3", "1/2", "1/3", "1/6"};
    int D = (Y > W) ? Y : W;

    printf("%s\n", probability[D]);
    return 0;
}



