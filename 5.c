#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d %d %d\n", a & b, a | b, a ^ b);
    printf("%d %d %d", ~a, a<<2, a>>2);

    return 0;
}