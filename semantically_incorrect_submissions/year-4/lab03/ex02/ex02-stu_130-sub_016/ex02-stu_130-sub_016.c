
#include <stdio.h>

void piramide(int n){
	int i = 0, u, meio;

	for (; i < n; i++){
		for (u = 0; u < n - i - 1; u++){
			printf("  ");
		}
		for (meio = 0; meio < i + 1; meio++ ){
			printf("%d ", meio + 1);
		}
		for (meio--; meio >= 1; meio--){
			printf("%d ", meio);

		}
		for (u = 0; u < n - i - 1; u++){
			printf("  ");
		}
		printf("\n");
	}	
}

int main(){
	int n = 0;

	while (n < 2){
		scanf("%d", &n);
	}
	piramide(n);
	return 0;
}
