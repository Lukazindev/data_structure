typedef int tipoitem;
const int max_itens = 100;

class pilha{
    private:
    int tamanho;
    tipoitem* estrutura;

    public:
    pilha(); // construtora
    ~pilha(); // destrutora
    bool estacheia(); // verifica se a pilha está cheia
    bool estavazia(); // verifica se a pilha está vazia
    void inserir(tipoitem item); // push
    tipoitem remover(); // pop
    void imprimir(); // print
    int qualtamanho(); // lenght
    



}; 
