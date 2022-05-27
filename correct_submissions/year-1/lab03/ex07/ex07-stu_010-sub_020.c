#include <stdio.h>
#define SIM 1
#define NAO 0

int main()
{
	int resultado = 0, c, numero = NAO, operador, valor = 0;

	
	while ((c = getchar()) >= '0' && c <= '9')
		resultado = resultado * 10 + (c - '0');

	if (c == '\n') 
	{
        printf("%d\n", resultado);
		return 0;
	}

	while ((c = getchar()) != '\n')
	{
		if (numero == NAO) 
		{
			operador = c;
			getchar(); 
			numero = SIM;
			valor = 0;
		}
		else
		{
			if (c != ' ')
				valor = valor * 10 + (c - '0');
			else
			{
				numero = NAO;
				if (operador == '+')
					resultado += valor;
				else
					resultado -= valor;
			}
		}
	}
	
	if (operador == '+')
		resultado += valor;
	else
		resultado -= valor;

	printf("%d\n", resultado);
	return 0;
}