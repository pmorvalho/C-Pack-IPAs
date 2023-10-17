

#include <stdio.h>

#define FALSE 0
#define TRUE 1

int charToDecimal(char c);
int strToInt();
char getOperator();
int evaluateExpressionTail(int currentEval, char operator);

int main() {
    int result = evaluateExpressionTail(0, '+');
    printf("\n%d\n", result);
    return 0;
}

int charToDecimal(char c) {
    return (9 - (57 % (int)c));
}

int strToInt() {
    char c;
    int num = 0;
    while((c = getchar()) != EOF && c != ' ' && c != '\\' && c != 'n' && c != '\n') {
        c = charToDecimal(c);
        num = num * 10 + c;
    }
    return num;
}

char getOperator() {
    char operator = getchar();
    getchar();
    return operator;
}

int evaluateExpressionTail(int currentEval, char operator) {
    int currentNum = strToInt();
    char nextOperator = getOperator();
    if (nextOperator == EOF || nextOperator == '\\' || nextOperator == 'n' || nextOperator == '\n') {
        if (operator == '+')
            return (currentEval + currentNum);
        return (currentEval - currentNum);
    }
    if (operator == '+')
        return evaluateExpressionTail((currentEval + currentNum), nextOperator);
    return evaluateExpressionTail((currentEval - currentNum), nextOperator);
}