#include <stdio.h>
int main()
{
	int a,b,c,min,med,max;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	if (a<b){
		if (b<c){
			min = a;
			med = b;
			max = c;}
		else{
			if (a<c){
				min = a;
				med = c;
				max = b;}
			else{
				min = c;
				med = a;
				max = b;}}}
	else{
		if (a<c){
			min = b;
			med = a;
			max = c;}
		else{
			if (b<c){
				min = b;
				med = c;
				max = a;}
			else{
				min = c;
				med = b;
				max = a;}}}
	printf("%d %d %d\n", min, med, max);
	return 0;
}

