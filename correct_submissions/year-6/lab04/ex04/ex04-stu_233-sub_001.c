

# include <stdio.h>
# define TAMANHO_MAX 80

int tamanho(char str[]) {
    int i = 0;
    while (str[i] != '\0') i++;
    return i;
}

int palindromo(char str[]) {
    int l = 0, r = tamanho(str) -1;
    while(l < r) {
        if (str[l++] != str[r--])
            return 0;
        l++; r--;
    }
    return 1;
}


int main() {
    char str[TAMANHO_MAX];
    scanf("%s", str);
    printf("%s\n", palindromo(str)? "yes" : "no");

    return 0;
}