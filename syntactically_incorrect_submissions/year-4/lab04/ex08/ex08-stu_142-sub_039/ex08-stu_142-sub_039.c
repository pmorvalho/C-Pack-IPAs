
#include <stdio.h>
#include <ctype.h>
#define MAX 100

void printVector(int vector[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d", vector[i]);
    }
    printf("\n");
}

void checkBigger(int first[], int size, int second[], int max[])
{
    for (int i = 0; i < size; i++)
    {
        
        if (first[i] > second[i])
        {
            max[i] = first[i];
        }
        else
        {
            max[i] = second[i];
        }
    }
}

int main()
{
    int first[MAX], second[MAX], max[MAX], index = 0, size = 0, checker = 0;
    char c;
    while ((c = getchar()) != EOF && c != '\n')
    {
        
        if (c == ' ')
        {
            checker = 1;
            
            continue;
        }
        if (checker == 0)
        {
            size++;
            first[index++] = c - '0';
        }
        else
        {
            second[index++ - size] = c - '0';
        }
    }
    checkBigger(first, size, second, max);
    printVector(max, size);
    return 0;
}