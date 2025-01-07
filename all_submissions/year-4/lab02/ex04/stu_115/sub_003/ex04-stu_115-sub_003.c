
#include <stdio.h>

int num1, num2, num3;

int max(int x, int y, int z) {
    int maxNum = x;
    if (maxNum < y)
        maxNum = y;
    if (z > maxNum)
        maxNum = z;
    return maxNum;
}

int min(int x, int y, int z) {
    int minNum = x;
    if (minNum > y)
        minNum = y;
    if (z < minNum)
        minNum = z;    
    return minNum;
}

int med(int x, int y, int z) {
    int medNum = x;
    int minNum = min(x,y,z);
    int maxNum = max(x,y,z);
    if (medNum == maxNum || medNum == minNum) 
        medNum = y;
    if (medNum == maxNum || medNum == minNum) 
        return z;
    return medNum;
}

int main() {
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("%d %d %d\n", min(num1, num2, num3), med(num1, num2, num3), max(num1, num2, num3));
    return 0;
}