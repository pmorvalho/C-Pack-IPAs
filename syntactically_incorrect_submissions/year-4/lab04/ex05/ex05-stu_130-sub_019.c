
#include <stdio.h>

#define MAX 100

int leLinha(char s[]);

int main(){
    char c, i, str[MAX];

    for ( i = 0;((c = getchar()) != EOF && c != '\n');i++){
         str[i] = c;
    }
    str[i] = '\0';
    leLinha(str);
    printf("%s\n", str);
    return 0;
}
                  
int leLinha(char s[]){
    int p = 0; 

    for(int i = 0; i < MAX && s[i] != '\0'; i++){
        p++;
    }   
    return p;
}