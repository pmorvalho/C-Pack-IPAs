
#include <stdio.h>

void maiusculas(char s[], int length){

    int i, offset = 'a' - 'A';

    for(i = 0; i < length;i++){

        if ((s[i] >= 'a') && (s[i] <= 'z'))
            s[i] -= offset;
    }

}

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

    maiusculas(s, i);

    printf("%s\n", s);

    return i;

}

int main(){

    char s[80];

    leLinha(s);

    return 0;
}