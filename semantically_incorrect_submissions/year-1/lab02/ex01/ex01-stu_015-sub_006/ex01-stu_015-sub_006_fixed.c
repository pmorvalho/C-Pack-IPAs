#include <stdio.h>

int main(){

 int a,b,c;
 scanf("%d", &a);
 scanf("%d", &b);
 scanf("%d", &c);

 if (a > b && a > c){
 	printf("%d", a);
 }

 if (b > a && b > c){
    printf("%d", b);
 }
 	

 if (c > a && c > b){
 	printf("%d", c );
 }
 printf("\n");
return 0;
}
