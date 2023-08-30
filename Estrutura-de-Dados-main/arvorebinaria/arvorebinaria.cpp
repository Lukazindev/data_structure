#include <iostream>
#include <cstddef>
#include "arvorebinaria.h"

using namespace std;

    arvorebinariadebusca::arvorebinariadebusca()
    {
        raiz = NULL;
    }

    arvorebinariadebusca::~arvorebinariadebusca()
    {
        deletararvore(raiz);
    }

    void arvorebinariadebusca::deletararvore(No* Noatual)
    {
         if (Noatual != NULL){
            deletararvore(Noatual->filhoesquerda);

            deletararvore(Noatual->filhodireita);

            delete Noatual;
        }
    }

    No* arvorebinariadebusca::obterRaiz()
    {
        return raiz;
    }

    bool arvorebinariadebusca::estavazio()
    {
        return (raiz == NULL);
    }

    bool arvorebinariadebusca::estacheio()
    {
        try{
            No* temp = new No;
            delete temp;
            return false;
        } catch(bad_alloc exception){
            return true;
        }
    }

    void arvorebinariadebusca::inserir(aluno aluno)
    {
        if (estacheio()){
            cout << " A arvore está cheia!\n";
            cout << " não foi possivel inserir esse elemento!\n";
        } else{
            No* NoNovo = new No;
            NoNovo->aluno = aluno;
            NoNovo->filhodireita = NULL;
            NoNovo->filhoesquerda = NULL;
            if (raiz == NULL){
                raiz = NoNovo;
            } else{
                 No* temp = raiz;
                 while (temp != NULL){
                    if(aluno.obterRa() < temp->aluno.obterRa()){
                        if (temp->filhoesquerda == NULL){
                            temp->filhoesquerda = NoNovo;
                            break;
                        } else{
                            temp = temp->filhoesquerda;
                        }
                    } else{
                        if (temp->filhodireita = NULL){
                            temp->filhodireita = NoNovo;
                            break;
                        } else{
                            temp = temp->filhodireita;
                        }
                    }
                 } 
            }
        }
    }

    void arvorebinariadebusca::remover(aluno aluno)
    {
        removerbusca(aluno, raiz);
    }
    
    void arvorebinariadebusca::removerbusca(aluno aluno, No*& noatual)
    {
        if(aluno.obterRa() < noatual->aluno.obterRa()){
            removerbusca(aluno, noatual->filhoesquerda);
        } else if (aluno.obterRa() > noatual->aluno.obterRa()){
            removerbusca(aluno, noatual->filhodireita);
        } else{
            deletarNo(noatual);
        }
    }

    void arvorebinariadebusca::deletarNo(No*& noatual)
    {
        No* temp = noatual;
        if ( noatual->filhoesquerda == NULL){
            noatual = noatual->filhodireita;
            delete temp;
        } else if (noatual->filhodireita == NULL){
            noatual = noatual->filhoesquerda;
            delete temp;
        } else{
            aluno Alunosucessor;
            obterSucessor(Alunosucessor, noatual);
            noatual->aluno = Alunosucessor;
            removerbusca(Alunosucessor, noatual->filhodireita);
        }
    }

    void arvorebinariadebusca::obterSucessor(aluno& Alunosucessor, No* temp)
    {
        temp = temp->filhodireita;
        while(temp->filhoesquerda != NULL){
            temp = temp->filhoesquerda;
        } 
        Alunosucessor = temp->aluno;  
    } 

    void arvorebinariadebusca::buscar(aluno aluno, bool& busca)
    {
        busca = false;
        No* noatual = raiz;
        while (noatual != NULL){
            if (aluno.obterRa()< noatual->aluno.obterRa()){
                noatual = noatual->filhoesquerda;
            } else if(aluno.obterRa() > noatual->aluno.obterRa()){
                noatual = noatual->filhodireita;
            } else{
                busca = true;
                aluno = noatual->aluno;
                break;
            }
        }
    }

    void arvorebinariadebusca::imprimirpreordem(No* Noatual)
    {
        if (Noatual != NULL){
            cout << Noatual->aluno.obterNome() << ": ";
            cout << Noatual->aluno.obterRa() << endl;

            imprimirpreordem(Noatual->filhoesquerda);

            imprimirpreordem(Noatual->filhodireita);
        }
    }

    void arvorebinariadebusca::imprimiremordem(No* Noatual)
    {
        if (Noatual != NULL){
            imprimiremordem(Noatual->filhoesquerda);

            cout << Noatual->aluno.obterNome() << ": ";
            cout << Noatual->aluno.obterRa() << endl;

            imprimiremordem(Noatual->filhodireita);
        }
    }

    void arvorebinariadebusca::imprimirposordem(No* Noatual)
    {
        if (Noatual != NULL){
            imprimirposordem(Noatual->filhoesquerda);

            imprimirposordem(Noatual->filhodireita);

            cout << Noatual->aluno.obterNome() << ": ";
            cout << Noatual->aluno.obterRa() << endl;
        }
    }
