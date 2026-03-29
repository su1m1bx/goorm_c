#include <stdio.h>

int main(){
    double h = 0;
    double i = 0;
    double fm = 0;
    double b = 0;

    scanf("%lf %lf", &h, &i);

    if (h < 150) fm = h - 100;
    else if (h < 160) fm = (h - 150) / 2.0 + 50;
    else fm = (h - 100) * 0.9;

    b = (i - fm) * 100 / fm;

    if (b <= 10) printf("정상");
    else if (b <= 20) printf("과체중");
    else printf("비만");

    return 0;
}