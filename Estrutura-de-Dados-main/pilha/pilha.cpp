#include <iostream>
#include "pilha.h"

using namespace std;

    pilha::pilha() // construtora
    {
        tamanho = 0;
        estrutura = new tipoitem[max_itens];
    }
    pilha::~pilha() // destrutora
    {
        delete [] estrutura;
    }
    bool pilha::estacheia() // verifica se a pilha está cheia
    {
        return(tamanho == max_itens);
    }
    bool pilha::estavazia() // verifica se a pilha está vazia
    {
        return(tamanho == 0);
    }
    void pilha:: inserir(tipoitem item) // push
    {
        if (estacheia()){
            cout << " a pilha está cheia!/n";
            cout << "não é possivel inserir este elemento!/n";
        } else{
            estrutura[tamanho] = item
            tamanho++;

        }
    }
    tipoitem pilha::remover() // pop
    {
        if(estavazia()){
            cout << " a pilha está vazia!/n";
            cout << " não tem elemento para ser removido!/n"
            return 0;
        } else{
            tamanho return estrutura[tamanho-1]
            tamanho--;
            
        }
    }
    void  pilha::imprimir() // print
    {
        cout << "pilha: [ ";
        for (int i=0; i<tamanho; i++){
            cout << estrutura[i] << " ";
        }
        cout << "]\n";

    }
    int pilha::qualtamanho() // lenght
    {
        return tamanho;
    }
