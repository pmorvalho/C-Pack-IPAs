
#include <stdio.h>

int biggest(int num1, int num2, int num3) {
    if ((num1 > num2) && (num1 > num3)) {
        return num1;
    }
    else if ((num2 > num1) && (num2 > num3)) {
        return num2;
    }
    else {
        return num3;
    }
}

int main() {
    int num1, num2, num3;
  
    printf("Num:");
    scanf("%d %d %d", &num1,&num2,&num3);

    printf("%d", biggest(num1, num2, num3));
  
    return 0;
}
