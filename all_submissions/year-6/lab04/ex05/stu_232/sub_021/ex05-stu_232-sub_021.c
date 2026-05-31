

#include <stdio.h>
#define MAX 80

int leLinha(char s[]){
    int counter = 0;
    char c;
    
    while ((c = getchar()) != '\n' && (c != EOF) && (c != '\0')){
        s[counter++] = c;
    }

    return counter;
}

int main(){
    char s[MAX];
    int count = leLinha(s);

    for (int i = 0; i < count; i++){
        printf("%c", s[i]);
    }
    printf("\n");
    
    return 0;
}