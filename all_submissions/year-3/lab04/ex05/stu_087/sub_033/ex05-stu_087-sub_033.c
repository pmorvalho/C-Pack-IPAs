
#include <stdio.h>

int leLinha(char s[]){

    int c, i=0;

    c = getchar();

    while ((c != EOF) && (c != '\n'))
    {
        s[i] = c;
        i++;
        c = getchar();
    }
    
    s[i] = '\0';

    printf("%s", s);

    return i;

}

int main(){

    char s[80];
    leLinha(s);
    return 0;
}