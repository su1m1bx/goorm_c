#include <stdio.h>

int main(){
    int h, m;
    scanf("%d %d", &h, &m);

    if (h == 0 && m < 30) printf("%d %d", h-1+24, m-30+60);
    else if (h > 0 && m < 30) printf("%d %d", h-1, m-30+60);
    else printf("%d %d", h, m-30);

    return 0;
}