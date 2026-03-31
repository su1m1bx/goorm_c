#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);

	if (n == 1) {
		for (int i = 65; i < 91; i++){
			printf("%c ", i);
		}
	}
	else if (n==2) {
		for (int j = 97; j < 123; j++){
			printf("%c ", j);
		}
	}
	else printf("NO");

	return 0;
}