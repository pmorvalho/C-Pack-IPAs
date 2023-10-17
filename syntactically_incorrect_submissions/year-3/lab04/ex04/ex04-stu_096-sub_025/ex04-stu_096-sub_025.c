
#include <stdio.h>
#define MAX 80
int main(){
    int i, j, comp = 0, k, m, r = 0;
    char s[MAX], s2[comp];
    scanf("%s", s);
    for (k = 0; s[k] != 0; k++){
        comp++;
    }
    for (j = (comp-1) ; j >= 0; j--){
        for (i = 0; i < comp; i++)
            if ((j + i + 1 ) == comp)
                s2[i] = s[j];
    }
    for (m = 0; m < comp; m++){
        if (s[m] == s2[m])
            r++;
    }        
    if (r == comp)
        printf("yes");
    else
        printf("no");
    return 0;   
}