#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>

#include "Guerreiros.h"

Guerreiro Guerreiros[MAX_GUERREIROS];

int qtdGuerreiros = 0;

int CodigoAtual = 0;

int inicializarGuerreiros() {
	int i;
	for (i=0; i<MAX_GUERREIROS; i++) {
		
		if( qtdGuerreiros < MAX_GUERREIROS) {
	
		Guerreiros[i].CodigoDoGuerreiro = CodigoAtual;
		strcpy (Guerreiros[i].Nome, " ");
		strcpy (Guerreiros[i].Reino, " ");
		strcpy (Guerreiros[i].Titulo, " ");
		
   		break;
		}	
   } 
   
   	Guerreiros[0].CodigoDoGuerreiro = CodigoAtual++;
	strcpy(Guerreiros[0].Nome,   "  Guerreiro1");
	strcpy(Guerreiros[0].Reino,  "  Alaska ");
	strcpy(Guerreiros[0].Titulo, "  Gladiador ");
	
    Guerreiros[qtdGuerreiros];
	qtdGuerreiros=+1;
}

int SalvarGuerreiro( Guerreiro NovoGuerreiro ) {
	int i;
	if( qtdGuerreiros < MAX_GUERREIROS) {
		NovoGuerreiro.CodigoDoGuerreiro = CodigoAtual++;
		Guerreiros[qtdGuerreiros] = NovoGuerreiro;
		qtdGuerreiros++;
		return 1;
		
	}
	else
		return 0;
}

Guerreiro ObterGuerreiroPeloIndice(int indice ) {
	return Guerreiros[indice];
}

Guerreiro obterGuerreiroPeloCodigo(int codigo){
//	return Guerreiros[codigo].CodigoDoGuerreiro;
}

int QuantidadesGuerreiros() {
		return qtdGuerreiros;
}

int PesquisarNome (char nome[], int i) {
	
	Guerreiro EncontrarNome;
   	EncontrarNome = ObterGuerreiroPeloIndice(i);
   	
    if (strcmp(EncontrarNome.Nome, nome) == 0 ) {
    
        return 1;
    } else 
    	return 0;
}

int ApagarGuerreiroPeloCodigo( int codigo) {
	int i;

	for (i=0; i < qtdGuerreiros; i++) {
		if ( Guerreiros[i].CodigoDoGuerreiro == codigo) {
			Guerreiros[i] = Guerreiros[qtdGuerreiros-1];
			Guerreiros[qtdGuerreiros-1].CodigoDoGuerreiro = 0;
			qtdGuerreiros--;
			return 1;
		}
			else 
				return 0;
			
	}
} 


