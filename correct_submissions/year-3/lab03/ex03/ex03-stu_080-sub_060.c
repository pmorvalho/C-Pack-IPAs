
#include <stdio.h>
void cruz(int n){
    int l,c;
    for (l = 0; l < n; l++){
        for(c = 0; c < n; c++){
            if (c > 0)
                putchar(' ');
            if ((c == l)||(c == n-l-1))
                putchar('*');
            else 
                putchar('-');
        }
        putchar('\n');
    }
}

int main(){
    int num;
    scanf("%d",&num);
    cruz(num);
    return 0;
}