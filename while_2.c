#include <stdio.h>

int main() {
    int i = 1,  v;
    scanf("%d", &v);

    while (i < v + 1){
        printf("%d ", i*3);
        i += 1;
    }

    return 0;
}