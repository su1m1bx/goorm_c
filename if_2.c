#include <stdio.h>

int main(){
    int a, b, c, d;
    scanf("%d / %d, %d / %d", &a, &b, &c, &d);

    

    if ((float)a/b > (float)c/d){
        printf(">");
    }
    else if ((float)a/b < (float)c/d){
        printf("<");
    }
    else if ((float)a/b == (float)c/d){
        printf("=");
    }

    return 0;
}