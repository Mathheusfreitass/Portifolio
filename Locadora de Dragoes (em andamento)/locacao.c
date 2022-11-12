#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>

#include "Guerreiros.h"
#include "Dragoes.h"
#include "Elementos.h"
#include "locacao.h"


Locar Locacao[MAX_LOCACOES];
Guerreiro Guerreiros[MAX_GUERREIROS];
Dragao Dragoes[MAX_DRAGOES];

int qtdLocacao = 0;
int codLocacaoAtual = 1;

int QuantidadeLocacao(){
	return qtdLocacao;
}

Locar obterLocacaoPeloIndice(int indice) {
	return Locacao[indice];
}

int inicializarLocacao(int i) {

	for (i=0; i<MAX_LOCACOES; i++) {
		Locacao[i].codigoLocacao = 0;
		strcpy (Locacao[i].DataFimLocacao, " ");
		strcpy (Locacao[i].DataInicioLocacao, " ");
		Locacao[i].LocacaoCodigoDragao = 0;
		Locacao[i].LocacaoCodigoGuerreiro = 0;
		Locacao[i].qtdDragaoLocados = 0;
   }			
}

Locar ObterLocacaoPeloIndice(int indice ) {
	return Locacao[indice];
}


int QuantidadesLocacoes() {
		return qtdLocacao;
}

int DevolverqtdDragoes( ) {
	int d;
	d = QuantidadesDragoes();
	return d;
}



int Alugar(Locar l) {
	int i;
	
	for (i=0; i< MAX_LOCACOES; i++) {
		if ( Dragoes[i].UnidadeEmEstoque >= Locacao[i].qtdDragaoLocados) {
		
			l.codigoLocacao = codLocacaoAtual++;
			Locacao[qtdLocacao] = l;
		    Dragoes[i].UnidadeEmEstoque -= Locacao[i].qtdDragaoLocados;
		    qtdLocacao++;
		    return 1; 
		}
		else {
			return 0;
		}
	}
}

