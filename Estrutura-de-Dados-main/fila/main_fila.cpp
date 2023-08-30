#include <iostream>
#include "fila.h"

using namespace std;

int main(){
    fila fila1;
    int opcao;
    tipoitem item;
    cout << "programa gerador de filas\n";
    do{
        cout << "digite 0 para parar o programa\n";
        cout << " digite 1 para inserir um elemento\n";
        cout << "digite 2 para remover um elemento\n";
        cout << "digite 3 para imprimir a fila\n";
        cin opcao;
        if(opcao) = 1{
            cout << " digite o elemento a ser inserido na fila\n";
            cin item;
            fila1.inserir(item);
        } else if(opcao == 2){
            item = fila1.remover();
            cout << "o elemento removido é:" << item << endl;   
        } else if (opcao == 3){
            fila1.imprimir();
        }
        }
        while (opcao !=0);

    }
    return 0;
}
