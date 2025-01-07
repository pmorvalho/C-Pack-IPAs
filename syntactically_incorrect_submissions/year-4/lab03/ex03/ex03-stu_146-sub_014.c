

#include <stdio.h>

void CRUZ(int N){ 
    int l,c;
    for( l = 0; l < N; ++l){ 
        for( c = 0; c < N; ++c){
            if(c) putchar(' ');
            putchar((c+1 == N-l) || (c == l)? '*':'-');
        }
        putchar('\n');
    }

}

int main(){
    int N;
    scanf("%d",&N); 
    CRUZ(N);
    return 0;
}//