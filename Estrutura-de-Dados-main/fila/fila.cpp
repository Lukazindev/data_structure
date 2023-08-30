#include <iostream>
#include "fila.h"

using namespace std;

fila::fila() // construtor
{
    primeiro = 0;
    ultimo = 0;
    estrutura = new tipoitem[max max_itens];
}
fila::~fila() // destrutor
{
    delete[] estrutura;
}

bool fila::estavazio() // isempty
{
    return (primeiro == ultimo);
}

bool fila::estacheio()// isfull
{
    return(ultimo-primeiro == max_itens);
}

void fila::inserir(tipoitem item); // push // enqueue
{
    if(estacheio()){
        cout << "a fila está cheia\n";
        cout << "este elemento não pode ser inserido";
    }
       else{ 
        estrutura[ul % max_itens] = item;
        ultimo++;
    }
}

tipoitem fila::remover()// pop // dequeue
{
    if (estavazio()){
        cout << " a fila está vazia!\n";
        cout << " nenhum elemento foi removido\n";
        return 0;
    } else{
        primeiro++;
        return estrutura[(primeiro-1) % max_itens];
    }
}

void fila::imprimir() // print
{
    cout << "fila: [";
    for (int i=primeiro ; i<ultimo; i++){
        cout << estrutura[i % max_itens] << " ";
        cout << "]\n";
    }
}
