#include <stdio.h>
#include <string.h>

#define MAX 80

int leLinha(char s[]){
    char c;
    int num_char = 0;

    c = getchar();
    while ((c != '\n') && (c != EOF)){
        s[num_char] = c;
        num_char++;

        c = getchar();
        if (num_char >= 80) {
            break;
        }
    }

    s[num_char] = '\0';

    return num_char;
}

int main(){
    char s[MAX];

    leLinha(s);
    
    printf("%s", s);

    printf("\n");
    

    return 0;
}