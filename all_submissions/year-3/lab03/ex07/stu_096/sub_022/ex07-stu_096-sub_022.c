
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX_CARREIRAS 20
#define MAX_PARAGENS 10000
#define MAX_LIGACOES 30000
#define CARREIRA_MAX_BYTES 20
#define PARAGEM_MAX_BYTES 50
#define INVERSO_MAX 8

#define TRUE 1			
#define FALSE 0			



typedef struct {
    float latitude;
    float longitude;
} Localizacao; 

typedef struct {
    char nomeparagem[PARAGEM_MAX_BYTES];
    Localizacao localizacao;
} Paragem;

typedef struct {
    char nomecarreira[CARREIRA_MAX_BYTES];
    Paragem origem;
    Paragem destino;
    int numparagenscarreira;
    float custototal; 
    float duracaototal; 
} Carreira;

typedef struct {
    char carreira[CARREIRA_MAX_BYTES];
    Paragem origem;
    Paragem destino;
    float custo; 
    float duracao; 
} Ligacao ;





Carreira vet_carreiras[MAX_CARREIRAS];
int num_carreiras = 0;

Paragem vet_paragens[MAX_PARAGENS];
int num_paragens = 0;

char inverso[INVERSO_MAX] = "inverso\0";





int leProxPalavra(char str[]){
	char c = getchar();
	int i = 0;
	while (c == ' ' || c == '\t')
		c = getchar();
	while (c != ' ' && c != '\t' && c != '\n') {
		str[i++] = c;
		c = getchar();
	}
	str[i] = '\0';
	return (c == '\n');
}

int existenciaDeCarreira (char carreira[CARREIRA_MAX_BYTES]) {
    int i;
    for (i = 0; i < MAX_CARREIRAS; i++) {
        if (strcmp(vet_carreiras[i].nomecarreira, carreira) == FALSE){
            return TRUE;                                                 
        }
    }
    return FALSE;                                                        
}

void adicionaCarreiras (char carreira[]) {
    strcpy(vet_carreiras[num_carreiras].nomecarreira, carreira);
    num_carreiras++;
}

void listaCarreiras (int inv) {
    int i;
    if (inv == TRUE) {
        for (i = (num_carreiras - 1); i >= 0; i--){
            printf("%s\t", vet_carreiras[i].nomecarreira);
            printf("%s\t", vet_carreiras[i].origem);
            printf("%s\t", vet_carreiras[i].destino);
            printf("%s\t", vet_carreiras[i].numparagenscarreira);
            printf("%s\t", vet_carreiras[i].custototal);
            printf("%s\n", vet_carreiras[i].duracaototal);
        }
    }
    else {
        for (i = 0; i < num_carreiras; i++){
            printf("%s\t", vet_carreiras[i].nomecarreira);
            printf("%s\t", vet_carreiras[i].origem);
            printf("%s\t", vet_carreiras[i].destino);
            printf("%s\t", vet_carreiras[i].numparagenscarreira);
            printf("%s\t", vet_carreiras[i].custototal);
            printf("%s\n", vet_carreiras[i].duracaototal);
        }
    }
}


void c_adicionaListaCarreiras () {
    int i = 0;
    char c, carr[CARREIRA_MAX_BYTES], inv[INVERSO_MAX];
    c = getchar();
    while ( c == ' ' || c == '\t') {
        c = getchar();
    }
    while ( c != ' ' && c != '\t' && c != EOF) {
        carr[i] = c;
        i++;
        c = getchar();
    }
    carr[i] = '\0';
    if (existenciaDeCarreira(carr) == TRUE) {                          
        i = 0;
        c = getchar();
        while ( c == ' ' || c == '\t') {
            c = getchar();
        }
        while ( c != ' ' && c != '\t' && c != EOF) {
            inv[i] = c;
            i++;
            c = getchar();
        }
        inv[i] = '\0';
        if ( strcmp(inv,"inv") == 0 || strcmp(inv,"inve") == 0 || strcmp(inv,"inver") == 0 || strcmp(inv,"invers") == 0 || strcmp(inv,"inverso") == 0){
            listaCarreiras(TRUE);
        }
        else {
            printf("incorrect sort opition");
        }
    }
    else {                                    
        adicionaCarreiras(carr);
    }
}

int existenciaDeParagem (char paragem[PARAGEM_MAX_BYTES]) {
    int i;
    for (i = 0; i < PARAGEM_MAX_BYTES; i++) {
        if (strcmp(vet_paragens[i].nomeparagem, paragem) == FALSE){
            return TRUE;                                                  
            printf("%16.12f\t%16.12f", vet_paragens[i].localizacao.latitude, vet_paragens[i].localizacao.longitude);
        }
    }
    return FALSE; 
}


void p_adicionaListaParagens() {
    int i = 0, j = 0;
    float lat, lon;
    char c, parag[PARAGEM_MAX_BYTES];
    c = getchar();
    while ( c == ' ' || c == '\t') {
        c = getchar();
    }
    if (c == '"') {
        c = getchar();
        while (c != '"') {
            parag[i] = c;
            i++;
        }
        parag[i] = '\0';    
    }
    else {
        while ( c != ' ' && c != '\t' && c != EOF) {
            parag[i] = c;
            i++;
            c = getchar();
        }
        parag[i] = '\0';    
    }

    if (existenciaDeParagem(parag) == FALSE) {                  
        
    }
    else {
        
    }
}




void l_adicionaLigacoes() {
}
void i_listaIntersecoes() {
}
int main (){
    int c;
    
    while ((c = getchar()) != EOF) {
		switch (c) {
		case 'q': return 0;
		case 'c': c_adicionaListaCarreiras();
			break;
		case 'p': p_adicionaListaParagens();
			break;
		case 'l': l_adicionaLigacoes();
			break;
		case 'i': i_listaIntersecoes();
			break;
		default: printf("Invalid comand: %c\n", c);
		}
	}

	return 0;
}

