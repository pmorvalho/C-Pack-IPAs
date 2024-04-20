#include <stdio.h>

int main(){

 int a,b,c;
 scanf("%d %d %d", &a, &b, &c);
 
 if (a > b && a > c){
 	printf("%d\n", a);
 	return 0;
 }

 if (b > a && b > c){
    printf("%d\n", b);
    return 0;
 }
 	

 if (c > a && c > b){
 	printf("%d\n", c );
 	return 0;
 }
 return 0;
}
