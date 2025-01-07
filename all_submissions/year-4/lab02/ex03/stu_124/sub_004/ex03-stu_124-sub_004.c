
#include <stdio.h>

int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    char *mens;
    if (N % M == 0){
        mens ="yes";
    }
    else{
        mens = "no";
    }
    printf("%s\n", mens);
    return 0;
}