#include <stdio.h>

#define MAX 80

void apagaCaracter(char s[], char c);


int main()
{
    char s[MAX];
    char c;
    
    fgets(s, MAX, stdin);
    c = getchar();
    apagaCaracter(s, c);

    printf("%s", s);
    return 0;
}



void apagaCaracter(char s[], char c) {
    
    int read_i, write_i;
    char c2;
    read_i = write_i = 0;
    
    while((c2 = s[read_i++]) != '\0') {
        if (c2 != c)
            s[write_i++] = c2;
    s[write_i] = '\0';
    }

}