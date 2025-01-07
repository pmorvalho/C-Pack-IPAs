
#include <stdio.h>
#include <string.h>

enum state{Palavra, Espaco};

int main() {

    enum state st= Espaco;
    int atual;

    while ((atual = getchar()) != EOF) {
        switch (st) {
            case Espaco:
                if (atual == '"')
                    st = Palavra;
                break;
            case Palavra:
                if (atual == '"')
                    st = Espaco, putchar('\n');
                else
                    putchar(atual);
                break;
        }
   }
    return 0;
}
