


#include <stdio.h>

int main(){

    int soma = 0;

    for (int c = getchar(); c!= '\n'; c = getchar()){
        int n = c - '0';
        soma+= n;
    }

    if ((soma%9)==0) printf("yes\n");

    else printf("no\n");

    return 0;
}