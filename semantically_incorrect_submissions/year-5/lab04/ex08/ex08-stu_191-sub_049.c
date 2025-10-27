
#include <stdio.h>
#define DIM 100

void compare(char n1[], char n2[]){
    int i, end = 0;

    for (i=0; n1[i]!='\0' && end==0; ++i){

        if (n1[i]!=n2[i]){
            if (n1[i]>n2[i]){
                printf("%s", n1);
            } else {
                printf("%s", n2);
            }
            end = 1;
        }
    }
}

int main(){
    char n1[DIM], n2[DIM];

    scanf("%s", n1);
    scanf("%s", n2);

    compare(n1,n2);


    return 0;

}