
#include <stdio.h>

int main(){
    int n, m1 = 0, m2 = 0, l1[100], l2[100], c1 = 0, c2 = 0, i;
    char c;
        while((c = getchar()) != ' '){
            l1[m1] = c - '0';
            m1++;
        }
        while((c = getchar()) != EOF && c != '\n'){
            l2[m2] = c - '0';
            m2++;
        }

    for(i = 0; i < m1; i++){
        if(l1[i] > l2[i]){ c1++; break;}
        else if(l1[i] < l2[i]){ c2++; break;}
        else if(l1[i] == l2[i]){
            continue;
        }
        }
    if(c1 > c2)
        for(i = 0; i < m1; i++){
            printf("%d", l1[i]);
        }
    else if(c1 < c2)
        for(i = 0; i < m2; i++){
            printf("%d", l2[i]);
        }
    printf("\n");
    return 0;
}
