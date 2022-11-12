#define MAX_LOCACOES 5

struct tp_locacao{
	int codigoLocacao;
	int LocacaoCodigoDragao;
	int LocacaoCodigoGuerreiro;
	char DataInicioLocacao[20];
	char DataFimLocacao[20];
	float ValorLocacao;
	char pago;	
	int CodigoDragao;
	
	
	 int qtdDragaoLocados; 
};
	
typedef struct tp_locacao Locar;


int ExisteGuerreiro();

int inicializarLocacao(int i);
void LocarDragao();
void ListarLocacoes();
void CadastrarLocacoes();
void ApagarLocacao();
Locar ObterLocacaoPeloIndice(int indice );
int QuantidadesLocacoes();

int Alugar(Locar l);
