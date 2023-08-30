#include <iostream>
#include "aluno.h"

struct No{
    aluno aluno;
    No* filhoesquerda;
    No* filhodireita;
};

class arvorebinariadebusca{
    private:
    No* raiz;

    public:
    arvorebinariadebusca();
    ~arvorebinariadebusca();
    void deletararvore(No* Noatual);
    No* obterRaiz();
    bool estavazio();
    bool estacheio();
    void inserir(aluno aluno);
    void remover(aluno aluno);
    void removerbusca(aluno aluno, No*& noatual);
    void deletarNo(No*& noatual);
    void obterSucessor(aluno& Alunosucessor, No* temp);
    void buscar(aluno aluno, bool& busca);
    void imprimirpreordem(No* Noatual);
    void imprimiremordem(No* Noatual);
    void imprimirposordem(No* Noatual);
};
