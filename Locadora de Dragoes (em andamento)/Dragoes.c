#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>

#include "Dragoes.h"

Dragao Dragoes[MAX_DRAGOES];
int qtdDragoes=0;

int CodigoAtualDoDragao = 0;

int InicializarDragoes(int i) {
	for (i=0; i< MAX_DRAGOES; i++) {
		
	if( qtdDragoes < MAX_DRAGOES) {
		strcpy (Dragoes[i].Nome, " ");
		Dragoes[i].UnidadeEmEstoque = 0;
		Dragoes[i].preco = 0;
		Dragoes[i].codigo = CodigoAtualDoDragao;
		break;
	}
	
}
	
	Dragoes[0].codigo = CodigoAtualDoDragao;
	strcpy(Dragoes[0].Nome,   "  Dragonite");
	Dragoes[0].preco = 100;
	Dragoes[0].UnidadeEmEstoque= 1;
	
    Dragoes[qtdDragoes];
	qtdDragoes++;
	
}


Dragao ObterDragoesPeloIndice(int indice) {
	return Dragoes[indice];
}

int QuantidadesDragoes() {
	return qtdDragoes;
}


int SalvarDragao( Dragao NovoDragao ) {
	int i;
	if( qtdDragoes < MAX_DRAGOES) {
		NovoDragao.codigo = CodigoAtualDoDragao++;
		Dragoes[qtdDragoes] = NovoDragao;
		qtdDragoes++;
		return 1;
	}
		
	else
		return 0;
}

int PesquisarDragao (char nome[], int i) {
	
	Dragao EncontrarNome;
   	EncontrarNome = ObterDragoesPeloIndice(i);
   	
    if (strcmp(EncontrarNome.Nome, nome) == 0 ) {
        printf (" \n  Nome encotrado no indice ");
        printf (" \n Nome do Dragao : %s ",EncontrarNome.Nome);
        printf (" \n Codigo do Dragao : %s ",EncontrarNome.codigo);
        
        return 1;
    } else 
    	printf (" \n Cliente nao encontrado ");
}


int ApagarDragoesPeloCodigo( int codigo) {
	int i;

	for (i=0; i < qtdDragoes; i++) {
		if ( Dragoes[i].codigo == codigo) {
			Dragoes[i] = Dragoes[qtdDragoes-1];
			Dragoes[qtdDragoes-1].codigo = 0;
			qtdDragoes--;
			return 1;
		}
	} 
		return 0;
} 



