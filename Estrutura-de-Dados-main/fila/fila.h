// fila //
typedef int tipoitem;
const int max_itens = 100;

class fila{
    private:
    int primeiro, ultimo;
    tipoitem* estrutura;

    public:
    fila(); // construtor
    ~fila(); // construtor
    bool estavazio(); // isempty
    bool estacheio(); // isfull
    void inserir(tipoitem item); // push // enqueue
    tipoitem remover(); // pop // dequeue
    void imprimir(); // print
}
