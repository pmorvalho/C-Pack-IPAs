

#include <stdio.h>

int main() {
	float media;
	int N;
	scanf("%d", &N);
	for (int i=0; i!=N; i++) {
		float nota;
		scanf("%f", &nota);
		media += nota;
	}
	media /= N;
	printf("%.2f\n", media);
	return 0;
}