
#include <stdio.h>
int num1;
int num2;
int num3;

int max(int x, int y, int z) {
    int maxNum = x;
    if (maxNum < y)
        maxNum = y;
    if (z > maxNum)
        maxNum = z;
    return maxNum;
}

int min(int x, int y, int z) {
    int minNum = num1;
    if (minNum > num2)
        minNum = num2;
    if (num3 < minNum)
        minNum = num3;    
    return minNum;
}

int med(int x, int y, int z) {
    int medNum = x;
    int minNum = min(x,y,z);
    int maxNum = max(x, y, z);
    if (medNum == maxNum || medNum == minNum) 
        medNum = y;
    else if (medNum == maxNum || medNum == minNum) 
        return z;
    return medNum;
}

int main() {
    int aux = num2;
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("%d %d %d\n", min(num1, num2, num3), med(num1, num2, num3), max(num1, num2, num3));
    return 0;
}