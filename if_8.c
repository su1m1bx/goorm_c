#include <stdio.h>

int main(){
    int h, mt, ot;
    scanf("%d %d %d", &h, &mt, &ot);

    mt += ((89-h) / 5) + 1;
	
	
    if (mt > ot) printf("win");
    else if (mt < ot) printf("lose");
    else printf("same");


    return 0;
}