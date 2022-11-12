#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_CLIENTES 15
#define MAX_LIVROS 15
#define TAM_STRING 15

 #include "dados.c"
 
int i, j, codigo;
	

void Exibir_Clientes(); // CASE 1
void CadastrarCliente(); // CASE 2
void PesquisarCliente(); // CASE 3
void ExcluirCliente(); // CASE 4
int ListarLivros(); // CASE 5
void CadastrarLivro(); // CASE 6
void PesquisarLivro(); // CASE 7
void ExcluirLivro(); // CASE 8
void ListarLocados(); // CASE 9
int LocarLivro(); // CASE 10
int DevolverLivro(); // CASE 11


//////////////////////////////// FUN??ES DAS FUN??ES

void CadastrarTeste(); // VARIAVEL PARA PR? DEFINIR OS ARRAYS

void ObterNomeCliente ( int i, char nome[]); // 
void ObterTelefoneCliente(int i, char telefone[]);
int ObterCpfCliente(int i, char cpf[]);

int NovoCliente (int i, char nome[], char telefone[], char cpf[]);

int NovoLivro ( int i, char titulo[], int ano, char autor[]);

void Apresentar_livros ();

void Mostrar_Livros();
void BuscarCliente();
void Devolucao();
void ObterTitulo( int i, char titulo[]);
int ObterAno( int i);
void ObterAutor( int i, char autor[]);
int ExisteCliente();
int Apagar_Cliente(int i);
int ApagarLivro( int i );
int Alugar_livro();
void Buscar_Livro();
void Apresentar_Livros( int i);
void Apresentar_Livros_Locados();
int Cliente_Ncadastrado();
void Procurar();
void Devolucao(codigoCliente);


int main(int argc, char * argv []) {

	int i;
	
	InicializarArrays();
	
	
	CadastrarTeste();
    void MostrarMenu();
	
	  
	int opcaoMenu;
	do
	{
		
		
		
		
		MostrarMenu();
		scanf("%d", &opcaoMenu);
		system("cls");
		switch(opcaoMenu)
		{
			case 1:
				Exibir_Clientes();
				break;
			case 2:
				CadastrarCliente();
				break;
			case 3:
				PesquisarCliente();
				
				break;
			case 4:
				ExcluirCliente();
				break;
			case 5:
				ListarLivros();
				
				break;
			case 6:
				CadastrarLivro();
				
				break;
			case 7:
				PesquisarLivro();
				break;
			case 8:
				ExcluirLivro();
				
				break;
			case 9:
				ListarLocados();				
				break;
			case 10:
				LocarLivro();
				break;
			case 11:
				DevolverLivro();
				break;
		};
		
	}
	while(opcaoMenu !=0);
	
	
	return 0;
}; ////////// FIM DO MAIN

void MostrarMenu() // FUNCIONAR
{
	printf("\n\n ---------- MENU -------------------------\n");
	printf(" 0 - Sair \n");
	printf(" 1 - Listar cliente\n");
	printf(" 2 - Cadastrar cliente\n");
	printf(" 3 - Pesquisar cliente\n");
	printf(" 4 - Excluir cliente\n");
	printf(" 5 - Listar livros\n");
	printf(" 6 - Cadastrar livro\n");
	printf(" 7 - Pesquisar livro\n");
	printf(" 8 - Excluir livro\n");
	printf(" 9 - Listar livros locados\n");
	printf(" 10 - Locar livro\n");
	printf(" 11 - Devolver livro\n");
	
};

void Exibir_Clientes() // FUNCIONAR
 {
	system("cls");
	printf(" \n LISTA DE CLIENTES ");
	printf ("  \n CODIGO | NOME | TELEFONE |  CPF ");
	int i;
	
	for (i=0; i< MAX_CLIENTES; i++)
	{
		char nome[TAM_STRING];
		ObterNomeCliente(i,nome);
		
		char telefone[TAM_STRING];
		ObterTelefoneCliente(i, telefone);
		
		char cpf[TAM_STRING];
		ObterCpfCliente(i, cpf);
		
		printf (" \n  - %d -  %s  -	%s  -  %s  ", i,  nome, telefone, cpf );
		
	}
 };

void CadastrarCliente() // FUNCIONAR
{
	printf (" INFORME O CODIGO DO CLIENTE ");
	scanf ("%d", &i);
	
	if (i<0 || i>= MAX_CLIENTES) {
	 printf (" Codigo invalido ");
	}
	
	else
	{
		  char nome[TAM_STRING];
		  char cpf[TAM_STRING];
		  char telefone[TAM_STRING];
		 
		 ObterNomeCliente(i, nome);
		 
		if ( strcmp (nome, " " ) == 0 )
		{
			printf (" \n INFORME O NOME DO CLIENTE \n ");	
			fflush(stdin);	
			scanf("%[^\n]s", nome);
			
			printf (" \n  INFORME O TELEFONE DO CLIENTE\n ");
			fflush(stdin);	
			scanf("%[^\n]s", telefone);
		
			printf (" \n INFORME O CPF DO CLIENTE ");
			fflush(stdin);	
			scanf("%[^\n]s", cpf);
			
			printf (" CLIENTE CADASTRADO COM SUCESSO ");
			NovoCliente(i, nome, telefone, cpf );
		}
   }
};

void PesquisarCliente() // FUNCIONAR
{
	char nomeProcurado[TAM_STRING];
	fflush(stdin);	
	scanf("%[^\n]s", nomeProcurado);
	int i;
	char nome[TAM_STRING];
	
	printf (" \n digite o nome do cliente que deseja pesquisar ");
	
	for (i = 0; i < MAX_CLIENTES; i++)	/// CRIAR FUN??O
	{
		ObterNomeCliente(i, nome);
		if (strcmp (nome, nomeProcurado)==0)
		{
			printf("\n CLIENTE LOCALIZADO! \n");
			printf("	Codigo: %d \n",i);
			printf("	Nome: %s \n", nome);
		
			char cpf[TAM_STRING];
				
			ObterCpfCliente(i, cpf);
			printf("	CPF: %s \n", cpf);
					
			char telefone[TAM_STRING];
			ObterTelefoneCliente(i, telefone);
			printf("	Telefone: %s \n", telefone);
			break;
		}
	}
	if (i == MAX_CLIENTES)
		printf("Cliente n?o encontrado!\n");
};

void ExcluirCliente() // FUNCIONAR
{
	Exibir_Clientes();
	printf("-------------- Excluir Cliente -----------------\n");
	int i;
	char nome[TAM_STRING];
	char cpf[TAM_STRING];
	char telefone[TAM_STRING];
	
	printf(" Qual o codigo do cliente: ");
	scanf("%d", &i);
	if (i<0 && i >= MAX_CLIENTES)
	{
		printf("CODIGO INVALIDO!\n");
	}

		 if ( clientes[i].locacoes != -1 ) { 
		
			printf("Cliente precisa devolver livro antes de ser excluido!\n");
			return;
		}

	   else {
				ApagarCliente(i);
		}
};

int ListarLivros() // FUNCIONAR
{	
	printf("========== Lista dos Livros ==========\n");
	int i;

	printf ("  \n Codigo -  Titulo | Ano |  Autor ");

	for (i=0; i< MAX_LIVROS; i++)
	{	
	
		char titulo[MAX_LIVROS];
		ObterTitulo(i, titulo);

		int ano;
		ObterAno(i);

		char autor[MAX_LIVROS];
		ObterAutor(i,autor);
	
	
	printf (" \n  %d - %s - %d - %s ", i, titulo, ano, autor);
	
    }
};

void CadastrarLivro() // DEMONIO
{
	int i;

	system("cls");
	printf("----------------- Cadastro de Livros ----------------- \n");
	printf (" Os livros cadastrados atualmente ");
	ListarLivros();

	printf (" \n Digite o codigo do livro que deseja cadastrar ");
	scanf ("%d", &i);

	if (i<0 || i>= MAX_LIVROS) {
		printf (" Codigo invalido ");
	}

	else {
		char titulo[MAX_LIVROS];
		int ano;
		char autor[MAX_LIVROS];

		ObterTitulo(i, titulo);

		if ( strcmp (titulo, " ") == 0) 
		{
			printf (" \n Informe o nome do Livro ");
			fflush(stdin);	
			scanf("%[^\n]s", titulo);

			printf (" \n  Informe o ano do livro \n ");
			//fflush(stdin);	
			scanf("%d", &ano); // DEMONIO DO KRL 

			printf (" \n Informe o autor do livro ");
			fflush(stdin);	
			scanf("%[^\n]s", autor);

			NovoLivro(i,  titulo,  ano, autor);
		}
	}

};

void PesquisarLivro() // FUNCIONAR
{
	printf("Pesquisar livro pelo titulo\n");
	char nomeProcurado[TAM_STRING];
	printf("Informe o titulo do livro:");

	Buscar_Livro(nomeProcurado);
};

void Buscar_Livro() {
	char nomeProcurado[TAM_STRING];

	fflush(stdin);	
	scanf("%[^\n]s", nomeProcurado);
	int i;
	
	for (i = 0; i < MAX_LIVROS; i++)
	{
		if (strcmp(livros[i].titulo, nomeProcurado)==0)
		{
			printf("\n LIVRO LOCALIZADO! \n");
			printf("	Codigo: %d \n",i);
			printf("	Titulo: %s \n", livros[i].titulo);
			printf("	Ano: %d \n", livros[i].ano);
			printf("	Autor: %s \n", livros[i].autor);
			break;
		}
	}if (i == MAX_CLIENTES)
		printf("Cliente nao encontrado!\n");
};

void ExcluirLivro() { // FUNCIONAR
	ListarLivros();
	printf("-------------- Excluir Livro -----------------\n");
	int i;
	char titulo[MAX_LIVROS];
	int ano;
	char autor[MAX_LIVROS];

	printf(" Qual o codigo do livro: ");
		scanf("%d", &i);

		if (i<0 && i >= MAX_CLIENTES)
		{
			printf(" Codigo invalido !\n");
		}
	
			else {
				ApagarLivro(i);
				printf (" livro apagado com sucesso ");
			}
}; 

void ListarLocados() 
{
	printf("========== Lista dos Livros Locados ==========\n");

    	int i;
        char nome[TAM_STRING];
		char dataEntrega[TAM_STRING];
		int locacoes;
		char titulo[MAX_LIVROS];
		int ano;
		char autor[MAX_LIVROS];
	    
		for (i = 0; i < MAX_CLIENTES; i++)
		{
			if (clientes[i].locacoes != -1)
			{
				printf(" Codigo : %d - Cliente : %s - Livro locado : %s - Data para entregar : %s  \n", i , clientes[i].nome, livros[i].titulo, dataEntrega);
			}																							 // 		livros[locacoes].titulo[i]
		}
	   	
};

int LocarLivro()
{
	char dataEntrega[MAX_CLIENTES];

	Exibir_Clientes();
	printf("------------------ Locar Livro ---------------------------\n");
	printf("Digite o codigo do cliente: ");
	int i;
	scanf("%d", &i);

	if (i<0 || i >= MAX_CLIENTES)
	{
		printf("CODIGO INVALIDO!\n");
		return 0;
	}
	
	if (strcmp(clientes[i].nome,"")==0)
			
	{
		printf("Livro nao cadastrado!");
		return 0;
	}
		
	if (clientes[i].locacoes != -1)
	{
		printf(" Cliente ja locou livro!\n");
		return 0;
	}

	if  (strcmp(clientes[i].nome,"")==0)
	//	strcmp(livros[i].titulo,"")==0)
	{
		
		Cliente_Ncadastrado();
		printf(" \n Cliente nao esta cadastrado!" );
		return 0;
	}

	
	else {
	  printf("Digite o codigo do livro: ");
	  	printf("Digite a data de entrega: ");

		Alugar_livro();
			printf (" LIVRO LOCADO ");
	}
}; 


int DevolverLivro() {

	int locacoes;
	printf(" Devolucoes do livro \n");
	Exibir_Clientes();
	
	printf("Digite o codigo do cliente: ");
	int codigoCliente;
	
	scanf("%d", &codigoCliente);
	if (codigoCliente<0 || codigoCliente >= MAX_CLIENTES)
	{
		printf("CODIGO INVALIDO!\n");
		return;
	}
	
	else {
	Devolucao();
	} 
	
};





