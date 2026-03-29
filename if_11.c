#include <stdio.h>
#include <math.h>

int main(){
    int a = 0, b = 0, c = 0;
    scanf("%d %d %d", &a, &b, &c);

    int max = a;

    if (b > max) max = b;
    if (c > max) max = c;

    if (a + b + c - max > max) printf("yes");
    else printf("no");

    return 0;
}