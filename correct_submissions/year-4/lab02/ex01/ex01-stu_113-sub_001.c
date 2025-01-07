
#include <stdio.h>

int main()
{ 
    int x1, x2, x3;
    scanf("%d", &x1), scanf("%d", &x2), scanf("%d", &x3);
    printf("%d\n", 
            (x1>=x2 && x1>=x3) * x1 + 
            (x2>=x3 && x2>=x1) * x2 + 
            (x3>=x2 && x3>=x1) * x3);
    return 0;
}
