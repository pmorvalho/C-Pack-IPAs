
#include <stdio.h>
#define MAX 80

int len_str(char s[MAX]){
    int i, contador = 0;
    for (i = 0; s[i] != '\0'; i++){
        contador++;
    }
    return contador;
}

int main(){
    int n, i;
    char s[MAX];
    scanf("%s", s);
    n = len_str(s);

    if (n%2 == 0){
        for (i = 0; i < n; i++){
            if (s[i] != s[n-i-1]){
                printf("no\n");
                break;
            }
            else{
                printf("yes\n");
                break;
            }
            
        }
    }
    else{
        for (i = 0; i < n/2; i++){
            if (s[i] != s[n-i-1]){
                printf("no\n");
                break;
            }
            else{
                printf("yes\n");
                break;
            }
        
        }      
    }

    return 0;
}