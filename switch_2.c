#include <stdio.h>

int main(){
    char num[15];
    scanf("%s", num);

    char gen = num[7];

    switch (gen) {
        case '1':
        printf("남자");
        break;
        case '3':
        printf("남자");
        break;

        case '2':
        printf("여자");
        break;
        case '4':
        printf("여자");
        break;
    }

    return 0;
}   