

#include <stdio.h>

int main() {
    int n1, n2, n3, res, end;
    scanf("%d %d %d", &n1,&n2, &n3);
    
    res = (n1>n2) ? (n1) : (n2);
    end = (n3>res) ? (n3) : (res);
    
    printf("%d",end);
    return 0;
}
