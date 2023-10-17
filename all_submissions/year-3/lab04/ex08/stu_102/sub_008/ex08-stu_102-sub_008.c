
#include <stdio.h>
#include <string.h>
#define DIM 100
int main(){
    int i=0,c,j;
    char pal1[DIM],pal2[DIM];
    scanf("%s",pal1);
    scanf("%s",pal2);
    for (i=0,j = 0; i<strlen(pal1) && j<strlen(pal2); i++,j++){
        if (pal1[i] > pal2[j]){
            printf("%s",pal1);
            return 0;}
    }
    printf("%s",pal2);
    return 0;
}