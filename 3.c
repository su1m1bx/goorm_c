#include <stdio.h>

int main(){
    long int a;
    double b;
    char c;

    scanf("%ld %lf %c", &a, &b, &c);
    printf("%ld %.10f %c", a, b, c);

    return 0;
}