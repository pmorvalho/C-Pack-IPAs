
#include <stdio.h>
#define VECMAX 100

void askNumbers(int numbers[], int ammout);
void displayNumbers(int numbers[], int ammout);

int main(){

    int numbers[VECMAX],ammount;
    scanf("%d", &ammount);
    askNumbers(numbers, ammount);
    displayNumbers(numbers, ammount);

    return 0;

}

void askNumbers(int numbers[], int ammount){

    int i;
    for (i = 0; i < ammount; i++)
    {
        scanf("%d", &numbers[i]);
    }

}

void displayNumbers(int numbers[], int ammount){

    int i, j;
    for (i = 0; i < ammount; i++)
    {
        for (j = 0; j < numbers[i]; j++)
        {
            putchar('*');
        }
        putchar('\n');
    }

}