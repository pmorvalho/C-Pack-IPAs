



#include <stdio.h>

int main(){
    int c;
    c = getchar(); 
    while(c != EOF || c != '\n'){ 
        if(c != '0') putchar(c); 
        c = getchar(); 
    }
    return 0;
}