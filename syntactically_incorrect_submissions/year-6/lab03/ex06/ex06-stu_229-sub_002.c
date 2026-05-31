
#include <stdio.h>

int main(){
    int i, m = 0;
    char c;
    while((c = getchar()) != EOF && c != '\n'){
            m += c - '0';
    }
    if(m % 9 == 0) printf("yes\n");
    else printf("no\n");
    return 0;
}