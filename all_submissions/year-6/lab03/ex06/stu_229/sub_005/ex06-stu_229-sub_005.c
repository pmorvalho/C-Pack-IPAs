
#include <stdio.h>

int main(){
    int m = 0;
    char c;
    while((c = getchar()) != EOF && c != '\n'){
            m += c - '0';
    }
    if(m % 9 == 0) printf("yes\n");
    else printf("no\n");
    return 0;
}