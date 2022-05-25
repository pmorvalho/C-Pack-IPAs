#include <stdio.h>
#define VECMAX 100

int main()
{
	int n, i, j, x, max = 0, k;
	int tab[VECMAX];

	scanf("%d", &n);

	for(i = 0; i < n; i++){
		scanf("%d", &x);
		tab[i] = x;
		if (x > max){
			max = x;}}

	k = max;

	for(i = 0; i < max; i++){
		for(j = 0; j < n; j++){
			if (tab[j] - k == 0){
				printf("*");
				tab[j]--;}
			else{
				printf(" ");}}
		k--;
		printf("\n");}

	return 0;
}
