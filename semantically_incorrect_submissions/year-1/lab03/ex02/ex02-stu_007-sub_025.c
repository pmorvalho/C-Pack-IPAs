#include <stdio.h>

int pede_num();
void print_blank(char c, int espacos);
void print_num_ascend(int a, int b);
void print_num_descend(int a, int b);

int main()
{
    int N, i, base_length;

    N = pede_num();
    base_length = (N * 2) - 1;
    for (i = 1; i <= N; ++i)
    {
        print_blank(' ', base_length);
        print_num_ascend(1, i);
        print_num_descend(1, (i-1));
        printf("\n");

        base_length = base_length - 2;
    }

    return 0;
}

int pede_num()
{
    int N;
    
    scanf("%d", &N);

    if (N < 2)
        N = pede_num();

    return N;
}

void print_blank(char c, int num_chars)
{
    int j;

    for (j = 0; j < num_chars; ++j)
    {
        printf("%c", c);
    }
}

void print_num_ascend(int a, int b)
{
    int i;

    for (i = a; i <= b; ++i)
    {
        printf("%d ", i);
    }
}

void print_num_descend(int a, int b)
{
    int i;

    for (i = b; i >= a; --i)
    {
        printf("%d", i);
        if (i > a)
            printf(" ");
    }
}
