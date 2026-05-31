
#include <stdio.h>


int main(){

    int c,provisorio=0;
    while ((c=getchar())!=EOF ) {
        
        provisorio+=(c-'0');} 
    
    if (provisorio%9==0) {printf("yes\n");}
    else {printf("no\n");}
    
    return 0;}