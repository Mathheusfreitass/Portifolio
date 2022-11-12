#define MAX_DRAGOES 20

struct tp_dragao{
	int UnidadeEmEstoque;
	char Nome[30];
	int preco;
	int codigo;		
};
	
typedef struct tp_dragao Dragao;


// funcoes listar 
int QuantidadesDragoes();
Dragao ObterDragoesPeloIndice(int indice);


void ListarDragoes();
int inicializarDragoes(int i);

// funcoes listar 
int QuantidadesDragoes();
Dragao ObterDragoesPeloIndice(int indice);
//int QuantidadesClientes( int i );
//void ListarDragoes();
int inicializarDragoes(int i);


// funcoes cadastrar 
void CadastrarDragao();
int SalvarDragao(  Dragao NovoDragao);
//int SalvarClientes( Cliente NovoCliente);
void GravarDados();
//int SalvarCliente( Cliente a );

// funcoes pesquisar

int PesquisarDragao (char Nome[], int i);

// funcoes apagar
void ApagarDragao();

int ApagarDragaoPeloCodigo(int codigo);
int ApagarDragaoPeloIndice(int indice); 

// funcoes elementos 
void CadastrarElemento();
void ListarElementos();

