

#include <stdio.h>

int lineget(char s[]){
    fgets(s,100,stdin);
    return 0;
}


void maiusculas(char c[]){
    int i =0;
    while (c[i]!= '\0'){
        if (c[i] >= 'a' && c[i] <= 'z')
            c[i] = c[i] - 'a' + 'A';
    i++;    
    }
    
}

int main() {
    char line[100];
    lineget(line);
    maiusculas(line);
    printf("%s\n", line);
    return 0;
}
