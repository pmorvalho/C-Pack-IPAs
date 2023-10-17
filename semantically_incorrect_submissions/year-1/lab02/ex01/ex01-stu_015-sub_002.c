#include <stdio.h>

int main(){

 int a,b,c;
 printf("Introduza tres inteiros: ");
 scanf("%d %d %d", &a, &b, &c);
 
 if (a > b && a > c){
 	printf("%d", a);
 	return a;
 }

 if (b > a && b > c){
    printf("%d", b);
    return b;
 }
 	

 if (c > a && c > b){
 	printf("%d", c );
 	return c;
 }
 return 0;
}
