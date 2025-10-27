
#include <stdio.h>


int main(){
    int sum=0,number_of_char=0,n;
    while ((n = getchar())!= EOF && n != '\n'){
        number_of_char++;
        sum += (n-48);
    }
    printf("%d\n%d\n",number_of_char,sum);
    return 0;

}