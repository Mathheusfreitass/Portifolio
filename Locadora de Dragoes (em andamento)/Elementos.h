#define MAX_ELEMENTOS 5
#define TAM_ELEMENTOS 20

struct tp_elemento{
//	Elemento Elementos;
	
	char nome[TAM_ELEMENTOS];
	char vunerabilidade[TAM_ELEMENTOS];
	int codigoElemento;		
};
	
typedef struct tp_elemento Elemento;


// funcoes listar 
int QuantidadesElementos();
Elemento ObterElementosPeloIndice(int indice);

void ListarElementos();

// funcoes listar 

//int QuantidadesClientes( int i );
//void ListarDragoes();
int inicializarElementos(int i);


// funcoes cadastrar 
void CadastrarElementos();
int SalvarElementos(  Elemento NovoElemento);
//int SalvarClientes( Cliente NovoCliente);
void GravarDados();
//int SalvarCliente( Cliente a );

// funcoes pesquisar

int PesquisarElementos (char Nome[], int i);

// funcoes apagar
void ApagarElementos();

int ApagarElementosPeloCodigo(int codigo);
int ApagarElementosPeloIndice(int indice); 

