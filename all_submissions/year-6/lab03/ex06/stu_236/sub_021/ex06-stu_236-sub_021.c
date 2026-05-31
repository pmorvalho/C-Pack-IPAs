
# include <stdio.h>

int main(){
    char s[101];
    int i = 0;
    int soma = 0;
    scanf("%100s", s);
    while (s[i] != '\0'){
        soma += s[i] - '0';
        i++;
    }
    if (soma % 9 == 0)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}