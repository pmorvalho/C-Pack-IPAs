
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main(){
    char inv[550] = "inv";
    int s;
    s = strcmp(inv, "inv");
    printf("%d", s);
    return 0;
}