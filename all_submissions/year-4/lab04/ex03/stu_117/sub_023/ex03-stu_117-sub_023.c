
#include <stdio.h>

int maior(int nums[], int comprimento)
{
    int maior = nums[0];
    for(int i = 1; i < comprimento; i++)
    {
        if(nums[i] > maior)
            maior = nums[i];
    }
    return maior;
}

int main()
{
    int n;
    scanf("%d", &n);
    int nums[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &nums[i]);
    int numLinhas = maior(nums, n), numColunas = n;
    for(int linha = 0; linha < numLinhas; linha++)
    {
        for(int coluna = 0; coluna < numColunas; coluna++)
        {
            if(n - linha < nums[coluna])
                putchar('*');
            else   
                putchar(' ');
        }
        putchar('\n');
    }
    return 0;
}