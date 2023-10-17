
#include <stdio.h>

int isDigit(int c){
    return (c >= '0') && (c <= '9');
}

enum state{
    IN,
    OUT
};

#define ADD 1
#define SUBTRACT 0

int main(){

    enum state st = OUT;
    int currentChar, currentDigit=0, currentNum=0, operator = ADD, sum=0;

    while ((currentChar = getchar()) != EOF)
    {
        switch (st)
        {
            case IN:
                if (isDigit(currentChar)){
                    currentDigit = currentChar - '0';
                    currentNum = currentNum * 10 + currentDigit;
                } 
                else if((currentChar == ' ') || (currentChar == '\n')){
                    st = OUT;
                    if (operator == ADD){
                        sum += currentNum;
                    }else{
                        sum -= currentNum;
                    }
                    currentNum = 0;
                }
                
            break;

            case OUT:
                if (isDigit(currentChar)){
                    currentDigit = currentChar - '0';
                    currentNum = currentNum * 10 + currentDigit;
                    st = IN;
                } 
                else if(currentChar == '+'){
                    operator = ADD;
                }
                else if(currentChar == '-'){
                    operator = SUBTRACT;
                }

            break;
        }
    }

    printf("%d\n", sum);

    return 0;
}