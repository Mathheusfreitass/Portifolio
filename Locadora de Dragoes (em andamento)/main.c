#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <locale.h>
#include <conio.h>

#include "Guerreiros.h"
#include "Dragoes.h"
#include "Elementos.h"
#include "locacao.h"

void imprimeMenu() {
    printf ("  \n______________________________________  \n");
    printf (" | \t            Menu             		 | \n");
    printf (" | \t                             		 | \n");
    printf (" | \t '0' - PARA ENCERRAR OPERACAO      | \n");
    printf (" | \t                             		 | \n");
    printf (" | \t '1' - GUERREIROS			     	 | \n");
    printf (" | \t                             		 | \n");
    printf (" | \t '2' - DRAGOES			    	 | \n");
	printf (" | \t                               	 | \n");
	printf (" | \t '3' - ELEMENTO DE DRAGOES     	 | \n");
	printf (" | \t                               	 | \n");
	printf (" | \t '4' - LOCACOES                    | \n");
    printf (" |______________________________________| \n");
}

void Sub_Menu() {
    printf ("  ______________________________________ \n");
    printf (" |           SUB MENU             		 | \n");
    printf (" |                              		 | \n");
    printf (" |  '1' - LISTAR      			  		 | \n");
    printf (" |                              		 | \n");
    printf (" |  '2' - CADASTRAR 		      		 | \n");
    printf (" |                               		 | \n");
    printf (" |  '3' - PESQUISAR		     		 | \n");
    printf (" |                               		 | \n");
    printf (" |  '4' - EXCLUIR			   	         | \n");
	printf (" |                                  	 | \n");
    printf (" |  '0' - SAIR						 	 | \n");
    printf (" |______________________________________| \n");
}

void ListarGuerreiros() {
	system("cls");
	printf (" \n  Lista de Guerreiros ");
	int i;
	
		for (i=0; i < QuantidadesGuerreiros(); i++)  {
		Guerreiro Guerreiro_Atual;
		Guerreiro_Atual = ObterGuerreiroPeloIndice(i);

		printf (" \t \n \n  Codigo   %d ", Guerreiro_Atual.CodigoDoGuerreiro);
		printf (" \t   Nomes    %s ", Guerreiro_Atual.Nome);
		printf (" \t   Reino    %s", Guerreiro_Atual.Reino);
		printf (" \t   Titulo   %s ", Guerreiro_Atual.Titulo);

	}	
		if (QuantidadesGuerreiros()==0){
		printf (" \n \n nenhum Guerreiro encontrado\n");
	}
}

void CadastrarGuerreiro() {
	system("cls");
	
	Guerreiro NovoGuerreiro; 

	printf (" \n  \n Cadastrar Guerreiros ");

    fflush(stdin);
	printf (" \n \n \n  Nome do Guerreiro "); 
    gets (NovoGuerreiro.Nome);
    
    fflush (stdin);
    printf (" \n \n Reino do Guerreiro ");
    scanf (" %s", NovoGuerreiro.Reino);
    
    fflush(stdin);
    printf (" \n \n Titulo do Guerreiro ");
    scanf (" %s", NovoGuerreiro.Titulo);
    
    
	if 	(SalvarGuerreiro (NovoGuerreiro)== 0 ){
		printf (" \n \n  Nao foi possivel salvar o Guerreiro ");
	} else
	
	if 	(SalvarGuerreiro (NovoGuerreiro)== 1 ){
		printf (" \n \n O Guerreiro foi Cadastrado com sucesso ");
	
	system("pause");
	}	
	
}

void PesquisarGuerreiro () {
	system("pause");
    int i;
    char nome[TAM_STRING];
    system("cls");
    
    Guerreiro EncontrarNome;
   	EncontrarNome = ObterGuerreiroPeloIndice(i);

    printf (" \n Digite o nome do Guerreiro que deseja encontrar ");
    scanf ("%s", nome);

	 PesquisarNome( nome, i);
	 
	  if (PesquisarNome( nome, i) == 1 ) {
	  	printf (" \n  Nome encotrado no indice ");
        printf (" \n Nome do Cliente : %s ", EncontrarNome.Nome);
        printf (" \n Codigo do Cliente : %s ",EncontrarNome.CodigoDoGuerreiro);
        
		system("pause");
	
	} else 
		printf  (" Impossivel retornar ");

}

void ApagarGuerreiro() {
	system("pause");
	int i;
	
	ListarGuerreiros();
	int codigo;

	printf (" Digite o codigo do Guerreiro a ser apagado ");
	scanf("%d", &codigo);

	if (ApagarGuerreiroPeloCodigo(codigo)==1) 
		printf ("\n  guerreiro apagado com sucesso ");
	else 
		printf (" Falha ao apagar o guerreiro \n ");
}

///////////////////////////////////////////////////////////////////////////////

void ListarDragoes() {
	system("cls");
	printf (" \n Lista de Dragoes ");
	int i;
	
		for (i=0; i < QuantidadesGuerreiros(); i++)  {
		Dragao Dragao_Atual;
		Dragao_Atual = ObterDragoesPeloIndice(i);

		printf (" \t \t  Codigo  %d ", Dragao_Atual.codigo);
		printf (" \t \t  Nomes   %s ", Dragao_Atual.Nome);
		printf (" \t \t  Preco   %d ", Dragao_Atual.preco);
		printf (" \t \t  Preco   %d ", Dragao_Atual.UnidadeEmEstoque);
	}	
	
	if (QuantidadesDragoes()==0){
		printf ("nenhuma Dragao encontrada\n");
	}
}

void CadastrarDragao() {
	system("cls");
	
	Dragao NovoDragao; 

	printf (" \n Cadastrar Dragao ");

    fflush(stdin);
	printf (" \n \n Digite o Nome do Dragao "); 
    gets (NovoDragao.Nome);

  	fflush(stdin);
  	printf (" \n \n  Digite o nome o preco do Dragao ");
  	scanf ("%d", &NovoDragao.preco);

	fflush(stdin);
	printf (" \n n \ Digite a unidade em estoque ");
	scanf ("%d", &NovoDragao.UnidadeEmEstoque);
	
	SalvarDragao(NovoDragao);
}

void PesquisarDragaoo () {
	system("pause");
    int i;
    char nome[TAM_STRING];
    system("cls");

    printf (" \n Digite o nome do Cliente que deseja encontrar ");
    scanf ("%s", nome);

	 PesquisarNome( nome, i);
}

void ApagarDragao() {
	system("pause");
	int i;
	
	ListarDragoes();
	int codigo;

	printf (" Digite o codigo do dragao a ser apagado ");
	scanf("%d", &codigo);

	if (ApagarDragoesPeloCodigo(codigo)==1) 
		printf ("\n  Dragao apagado com sucesso ");
	else 
		printf (" Falha ao apagar o dragao \n ");
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void ListarElementos() {
	system("cls");
	printf (" \n Lista de Elementos ");
	int i;
	
		for (i=0; i < QuantidadesElementos(); i++)  {
		Elemento Elemento_Atual;
		Elemento_Atual = ObterElementosPeloIndice(i);

		printf (" \n \n  Codigo  %d ", Elemento_Atual.codigoElemento);
		printf (" \n \n  Nomes   %s ", Elemento_Atual.nome);
		printf (" \n \n  Preco   %d ", Elemento_Atual.vunerabilidade);
	}	
	
	if (QuantidadesElementos()==0){
		printf ("nenhuma Elemento encontradd\n");
	}
}

void CadastrarElemento() {
	system("cls");
	
	Elemento NovoElemento; 

	printf (" \n Cadastrar Elemento ");
		
    fflush (stdin);
    printf (" \n Codigo do Dragao ");
    scanf ("%d", &NovoElemento.codigoElemento);

    fflush(stdin);
	printf (" \n Nome do Elemento "); 
    gets (NovoElemento.nome);
    
    fflush(stdin);
	printf (" \n Vunerabilidade  "); 
    gets (NovoElemento.vunerabilidade);
    
	SalvarElementos(NovoElemento);       
}

void PesquisarElemento () {
	system("pause");
    int i;
    char nome[TAM_STRING];
    system("cls");

    printf (" \n Digite o nome do Elemento que deseja encontrar ");
    scanf ("%s", nome);

	 PesquisarNome( nome, i);
	system("pause");
}


void ApagarElemento() {
	system("pause");
	int i;
	
	ListarElementos();
	int codigo;

	printf (" Digite o codigo do Elemento a ser apagado ");
	scanf("%d", &codigo);

	if (ApagarElementosPeloCodigo(codigo)==1) 
		printf ("\n  Elemento apagado com sucesso ");
	else 
		printf (" Falha ao apagar o Elemento \n ");
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void ListarLocacoes() {
	system("cls");
	printf (" \n Lista de Locacoes ");
	int i;
	
		for (i=0; i < QuantidadesLocacoes(); i++)  {
		Locar Locacao_Atual;
		Locacao_Atual = ObterLocacaoPeloIndice(i);
		
		printf (" \n  O codigo do Dragao  e : %d ",Locacao_Atual.CodigoDragao);
		printf (" \n O codigo da Locacao e : %d", Locacao_Atual.codigoLocacao);
		
		printf (" \n A data de inicio da locacao: %s ", Locacao_Atual.DataInicioLocacao);
		printf (" \n A data do fim da locacao:  %s", Locacao_Atual.DataFimLocacao);
		printf (" \n A quantidade de Dragoes Locados: %d ", Locacao_Atual.qtdDragaoLocados);
		printf (" \n \n Valor pago para Locar o Dragao ", Locacao_Atual.pago);
	}	
	if (QuantidadesLocacoes()==0){
		printf ("nenhuma locacao encontrada\n");
	}
}

void LocarDragao() {
	int i;
	int codigoo;
	
	Locar l;
	
	if ( (QuantidadesGuerreiros()==0) || (QuantidadesDragoes()==0) ) {
		printf (" Impossivel Locar Dragao \n");
	} else {
	
	ListarGuerreiros();
		
	printf (" \n \n  Informe o codigo do guerreiro que deseja locar um Dragao ");
	scanf ("%d", &l.codigoLocacao);
	
	printf (" \n \n Informe o codigo do Dragao ");
	scanf ("%d", &l.CodigoDragao);
	
	printf (" \n \n Digite o valor pago ");
	scanf ("%d", &l.pago);
	
	printf (" \n \n  Informe a data de inicio da locacao ");
	scanf ("%s", &l.DataInicioLocacao);
	
	printf (" \n \n Informe a data do fim da locacao ");
	scanf ("%s", &l.DataFimLocacao);
	
	 Alugar(l);
	
	 printf (" \n \n  Locacao realizada ");					
 	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
    inicializarGuerreiros();
    int InicializarDragoes(int i);
 	int opcao;   
    do{ 
    		imprimeMenu();
			
			   printf (" | \n \n \n 		INFORME A OPCAO DESEJADA 	 	 | \n");
				scanf ("%d", &opcao);
				
				switch(opcao){
					system("cls");
						 case 0:
		               		 printf (" Operacao Encerrada \n"); 
		            	break;

						case 1:  // Guerreiros
            				system("cls");
						    printf (" | \t '1' - GUERREIROS			     	 | \n");
							Sub_Menu();
							
							scanf ("%d", &opcao);

			                switch(opcao) {
								case 0:
									printf (" \n \n  Operacao Encerrada \n"); 
								break;

								case 1:
									printf (" \n Listar Guerreiros  "); 
									ListarGuerreiros();
								break;

								case 2:
									printf (" \n Cadasreo Guerreiros  "); 
									CadastrarGuerreiro();
								break;

								case 3:
									printf (" \n Pesquisa Guerreiros  "); 
									PesquisarGuerreiro();
								break;
								
								case 4:
									printf (" \n Apagar Guerreiro pelo nome "); 
									
								break;
															
								default:
									printf (" \n erro ");
							} // fim do swith guerreiros
				
						break; // fim do swith
				//system("pause");

	
		case 2: 
					system("cls");
	                printf (" | \t   DRAGOES			    	 | \n \n");
						Sub_Menu();
								
						scanf ("%d", &opcao);
	
				        switch(opcao) {
	                    
	                    case 1:  
	                        printf ("\n \n Listar");
	 							ListarDragoes();
	                    break;
	                    
	                    case 2:  
	                        printf ("\n \n Cadastrar");
								CadastrarDragao();
	                    break;
	                    
	                    case 3: 
	                        printf (" \n \n Pesquisar");
								PesquisarDragaoo();
	                    break;
	                    
	                    case 4: 
	                        printf (" \n \n Excluir");
								
	                    break;
	                    
	                    default:
	                        
	                        printf ("\n \n Operacao Invalida");
	        		} // Fim do swith 3
		    
		        break;
	        
	      case 3: 
					system("cls");
	                printf (" | \t   ELEMENTOS			    	 | \n \n");
						Sub_Menu();
								
						scanf ("%d", &opcao);
	
				        switch(opcao) {
	                    
	                    case 1:  
	                        printf ("\n \n Listar");
	 							ListarElementos();
	                    break;
	                    
	                    case 2:  
	                        printf ("\n \n Cadastrar");
								CadastrarElemento();
	                    break;
	                    
	                    case 3: 
	                        printf (" \n \n Pesquisar");
								PesquisarElemento();
	                    break;
	                    
	                    case 4: 
	                        printf (" \n \n Excluir");
								ApagarElemento();
	                    break;
	                    
	                    default:
	                        
	                        printf ("\n \n Operacao Invalida");
	        		} // Fim do swith 3
		    
		    break; 
		        
		 		case 4:  // Locacoes 
            				system("cls");
						    printf (" | \t '4' - LOCACOES			     	 | \n");
							Sub_Menu();
							
							scanf ("%d", &opcao);

			                switch(opcao) {
								case 0:
									printf (" \n \n  Operacao Encerrada \n"); 
								break;

								case 1:
									printf (" \n Listar Locacoes  "); 
									ListarLocacoes();
								break;

								case 2:
									printf (" \n Locar Dragoes  "); 
									LocarDragao();
								break;
													
								default:
									printf (" \n erro ");
								break;
							} // fim do swith guerreiros
				
						break; // fim do swith
				//system("pause");
				break;
	
		
		} // fim do swith 
	}while(opcao != 0);

	return (0);

} //  fim da main 


