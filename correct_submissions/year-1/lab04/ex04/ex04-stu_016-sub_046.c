#include <stdio.h>

#define MAX 80

int main(){
    int last_pos = 0, i = 0, eh_palindromo = 1;
    char vector[MAX];
    scanf("%s", vector);

    while(vector[last_pos] != '\0') {
        last_pos++;
    }

    while(i < (last_pos / 2) && eh_palindromo) {
        
        if(vector[i] != vector[last_pos - i - 1]) eh_palindromo = 0;
        i++;
    }

    if(eh_palindromo) printf("yes\n");
    else printf("no\n");
    return 0;
}
