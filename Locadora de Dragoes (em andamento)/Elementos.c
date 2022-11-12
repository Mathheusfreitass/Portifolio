#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>

#include "Elementos.h"

Elemento Elementos[MAX_ELEMENTOS];

int qtdElementos = 0;

int inicializarElementos(int i) {

	for (i=0; i<MAX_ELEMENTOS; i++) {
	
		strcpy (Elementos[i].nome, " ");
		Elementos[i].codigoElemento = 0;
		strcpy (Elementos[i].vunerabilidade, "");
   }			
}

Elemento ObterElementosPeloIndice(int indice ) {
	return Elementos[indice];
}

int QuantidadesElementos() {
		return qtdElementos;
}

int SalvarElementos( Elemento NovoElementos ) {
	int i;
	if( qtdElementos < MAX_ELEMENTOS) {
		Elementos[qtdElementos] = NovoElementos;
		qtdElementos++;
		return 1;
	}
		
	else
		printf (" Erro");
		return 0;
}

int PesquisarElementos (char nome[], int i) {
	
	Elemento EncontrarNome;
   	EncontrarNome = ObterElementosPeloIndice(i);
   	
    if (strcmp(EncontrarNome.nome, nome) == 0 ) {
        printf (" \n  Nome encotrado no indice ");
        printf (" \n Nome do Elemento : %s ",EncontrarNome.nome);
        printf (" \n Codigo do elemento : %s ",EncontrarNome.codigoElemento);
        
        return 1;
    } else 
    	printf (" \n Elemento nao encontrado ");
}


int ApagarElementosPeloCodigo( int codigo) {
	int i;

	for (i=0; i < qtdElementos; i++) {
		if ( Elementos[i].codigoElemento == codigo) {
			Elementos[i] = Elementos[qtdElementos-1];
			Elementos[qtdElementos-1].codigoElemento = 0;
			qtdElementos--;
			return 1;
		}
			return 0;
				printf (" erro ao apagar ");
	}
} 


