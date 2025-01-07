
#include <stdio.h>

int converterParaInteiro(int l, int r) {
    return 10 * l + r;
}

int main() {
    int num = 0;  
    int oper = getchar();
    int res = 0; 
    int isSubtract = 0; 

    while (oper != '\n') {
        switch (oper) {
            case ' ':
                break;
            case '+':
                if (isSubtract) {
                    res -= num;
                } else {
                    res += num;
                }
                isSubtract = 0;
                num = 0;
                break;
            case '-':
                if (isSubtract) {
                    res -= num;
                } else {
                    res += num;
                }
                isSubtract = 1;
                num = 0;
                break;
            default:
                num = converterParaInteiro(num, oper - '0');
                break;
        }

        oper = getchar();
    }

    
    if (isSubtract) {
        res -= num;
    } else {
        res += num;
    }

    printf("%d\n", res);
    return 0;
}
