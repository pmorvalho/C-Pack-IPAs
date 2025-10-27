

#include <stdio.h>

int comprimento(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    return i;
}

int comparaNumerosGrandes(char s1[], char s2[]) {
    int c1 = comprimento(s1);
    int c2 = comprimento(s2);

    if (c1 > c2) {
        return 1;
    }
    else if (c1 < c2) {
        return -1;
    }
    else {
        for (int i = 0; i < c1; i++) {
            if (s1[i] > s2[i]) {
                return 1;
            }
            else if (s1[i] < s2[i]) {
                return -1;
            }
        }
        return 0;
    }

}

int main() {
    char num1[100], num2[100];

    scanf("%s", num1);
    scanf("%s", num2);

    int res = comparaNumerosGrandes(num1, num2);

    if (res == 1) {
        printf("%s\n", num1);
    }
    else if (res == -1) {
        printf("%s\n", num2);
    }
    else {
        printf("Os numeros sao iguais.\n");
    }
    
}