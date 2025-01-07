
#include <stdio.h>
#include <string.h>
#define VECMAX 100


int main(){
    int lim, i, cont, cmp;
    char s[VECMAX];
    scanf("%s", s);

    cmp = strlen(s) - 1;
    lim = (cmp % 2 == 0? cmp/2: (cmp+1)/2);
    for (i = 0; i < lim; i++){
        if(s[i] == s[i + cmp - 2 * i]){
            ++cont;            
        }
    }

    if (cont == lim){
        printf("yes\n");
    }
    else{
        printf("no\n");
    }

    return 0;    

}