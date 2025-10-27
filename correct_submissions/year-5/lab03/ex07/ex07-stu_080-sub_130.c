
#include <stdio.h>

int main(){
    int oper;
    int operation = 0;
    int num = 0;
    int state = 0; 

    while((oper = getchar()) != '\n'){
        switch (oper){
            case ' ': break;
            case '+':
                if(!state) operation += num;
                else operation -= num;
                state = 0;
                num = 0;
                break;
            case '-':
                if(state) operation -= num;
                else operation += num;
                state = 1;
                num = 0;
                break;
            
            default:
                num = 10*num + (oper - '0');
                break;
        }
    }

    if(!state) operation += num;
    else operation -= num;

    printf("%d\n", operation);

    return 0;
}