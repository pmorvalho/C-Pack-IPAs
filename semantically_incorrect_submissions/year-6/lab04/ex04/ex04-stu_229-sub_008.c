
#include <stdio.h>

int isPali(char s[]){
    int i, n, j = 0, temp;
    for(i = 0; s[i] != '\0'; i++){
        n +=1;
    }
    temp = n;
    for(i = 0; i < temp; i++){
        if(s[i] == s[n - i - 1]){
            j = 1;
        }
    }
    return j;
}

int main(){
    char s[80] = "";
    scanf("%s", s);
    if(isPali(s) == 1){
        printf("yes\n");
    } else {
        printf("no\n");
    }
    return 0;
}
        