


#define TEMP 2
#define DIM 1000

int main() {

    int c, estado = OUT, i = 0;
    char tab[DIM];

    c = getchar();
    while (c != EOF) {
        if (i != 0 && estado == OUT && tab[i-1] != '\n')
            tab[i++] = '\n';
        if (c == 92 && estado != TEMP)
            estado = TEMP;
        else if (estado == TEMP && (c == '"' || c == 92)) {
            tab[i++] = c;
            estado = IN;
        }
        else if (estado == IN && c != '"' && c != 92)
            tab[i++] = c;
        else if (c == '"' && estado != TEMP) {
            if (estado == IN)
                estado = OUT;
            else
                estado = IN;
        }
        c = getchar();
    }

    tab[i] = '\0';
    printf("%s", tab);

    return 0;
}