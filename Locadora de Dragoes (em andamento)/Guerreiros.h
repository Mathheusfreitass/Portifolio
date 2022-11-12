#define MAX_GUERREIROS 5
#define TAM_STRING 20

struct tp_guerreiro {
	char Nome[TAM_STRING];
	int CodigoDoGuerreiro;
	char Titulo[TAM_STRING];
	char Reino[TAM_STRING];
}; 

typedef struct tp_guerreiro Guerreiro;

// funcoes listar 
int QuantidadesGuerreiros();
Guerreiro ObterGuerreiroPeloIndice(int indice);
//int QuantidadesClientes( int i );
//void ListarGuerreiros();
int inicializarGuerreiros();

// funcoes cadastrar 
void CadastrarGuerreiro();
int SalvarGuerreiro( Guerreiro NovoGuerreiro);
void GravarDados();
//int SalvarCliente( Cliente a );

// funcoes pesquisar
void PesquisarGuerreiro ();
int PesquisarNome (char nome[], int i);

// funcoes apagar
void ApagarGuerreiro();
//int ApagarGuerreiroPeloCodigo(int codigo);

//////////////////////////////////////////////////////////////////////////////
Guerreiro obterGuerreiroPeloCodigo(int codigo);
Guerreiro obterGuerreiroPeloNome (char* nome);

int Cadastrar_Teste_Guerreiros();
