#include <stdio.h>
int main() {
	char sco[10];
	scanf("%s",sco);

    switch (sco[0]) {
        case 'A':
        printf("best");
        break;

        case 'B':
        printf("good");
        break;

        case 'C':
        printf("run");
        break;

        case 'D':
        printf("slowly");
        break;

        default:
        printf("what?");
    }
	return 0;
}
