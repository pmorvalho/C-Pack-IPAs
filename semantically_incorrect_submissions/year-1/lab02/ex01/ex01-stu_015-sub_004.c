#include <stdio.h>

int maior(int a, int b,int c){

	if (a > b && a > c){
 	return a;
 }

 if (b > a && b > c){
    return b;
 }
 	

 if (c > a && c > b){
 	return c;
 }
 return 0;
}

int main(){

 int a, b, c, m;
 printf("Introduza tres inteiros: ");
 scanf("%d %d %d", &a, &b, &c);
 m = maior(a, b, c);
 printf("%d\n", m);

 return 0;
}

