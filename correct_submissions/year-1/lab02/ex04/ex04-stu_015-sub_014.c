#include <stdio.h>

int main(){
	
	int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    if (a < b && a < c){
    	if(b < c) printf("%d %d %d\n", a, b, c);
    	else printf("%d %d %d\n", a ,c, b);
    } 
    if (b < a && b < c){
    	if(a < c) printf("%d %d %d\n", b, a, c );
    	else printf("%d %d %d\n", b, c, a );
    }
    if (c < a && c < b){
    	if (a < b) printf("%d %d %d\n", c, a, b );
    	else printf("%d %d %d\n",c , b, a );
    }
    return 0;	
}