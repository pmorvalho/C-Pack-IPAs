
#include <stdio.h>
int main(){
    int num;
    char seq;
    while (scanf("%d%c",&num,&seq) == 2){
        if(num== 0){
            printf("0");
        } else {
            printf("%d",num);
        }
        if (seq != '\n' || seq != EOF){
            printf("%c",seq);
        } else {
            break;
        }
    }
    return 0;
}