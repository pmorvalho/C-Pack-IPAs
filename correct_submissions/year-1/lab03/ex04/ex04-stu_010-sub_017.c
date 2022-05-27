#include <stdio.h>

#define ESCREVE 1
#define NAO_ESCREVE 0
#define DENTRO 1
#define FORA 0


int main ()
{
	int c, zero, numero;
	zero = NAO_ESCREVE;
	numero = FORA;

	while ((c=getchar()) != EOF)
	{
		if (c >= '1' && c <= '9')
		{
			putchar(c);
			zero = ESCREVE; 
		}

		else if (c == '0')
		{
			numero = DENTRO; 
			if (zero == ESCREVE)
				putchar(c);
		}

		else
		{
			if ((numero == DENTRO) && (zero == NAO_ESCREVE)) 
				putchar('0');

			putchar(c);
			zero = NAO_ESCREVE;
			numero = FORA;
		}
	}
	
	
	if ((numero == DENTRO) && (zero == NAO_ESCREVE))
			putchar('0');

	return 0;
}