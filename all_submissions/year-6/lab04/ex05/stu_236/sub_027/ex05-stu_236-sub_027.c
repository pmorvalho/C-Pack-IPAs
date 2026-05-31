
# include <stdio.h>
# define MAX 80

int leLinha(char s[]){
    int c, i = 0;
    while ((c = getchar()) != EOF && c != '\n')
        (i < MAX - 1) ? (s[i++] = (char)c) : 0;
    s[i] = '\0';
    printf("%s\n", s);
    return i;
}

int main(){
    char s[MAX];
    leLinha(s);
    return 0;
}