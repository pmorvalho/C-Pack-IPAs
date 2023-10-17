
#include <stdio.h>
#define VECMAX 100

void askNumbers(int numbers[], int ammout);
void displayNumbers(int numbers[], int vecSize, int dispSize);
int findHighestNum(int numbers[], int ammount);

int main(){

    int ammount, numbers[VECMAX], max;
    scanf("%d", &ammount);
    askNumbers(numbers, ammount);
    max = findHighestNum(numbers, ammount);
    displayNumbers(numbers, ammount, max);

    return 0;
}

void askNumbers(int numbers[], int ammount){

    int i;
    for (i = 0; i < ammount; i++)
    {
        scanf("%d", &numbers[i]);
    }

}

void displayNumbers(int numbers[], int vecSize, int dispSize){

    int i, j;
    for (i = 0; i < dispSize; i++)
    {
        for (j = 0; j < vecSize; j++)
        {
            if(numbers[j] > 0){
                putchar('*');
                numbers[j]--;
            }else{
                putchar(' ');
            }
        }
        putchar('\n');
    }

}

int findHighestNum(int numbers[], int ammount){
    
    int i, max = 0;

    for (i = 0; i < ammount; i++)
    {
        if(numbers[i] > max){
            max = numbers[i];
        }
    }

    return max;
    
}