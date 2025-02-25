#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> lista = {100, 75 , 50, 25, 5}; // Criando a lista.
    int fimLista;
    int variavelTemp;
    int tamanhoLista;

    tamanhoLista = lista.size(); // lista.size() = len(lista) do python.
    fimLista = tamanhoLista/2;
    for (int i = 0 ; i < fimLista ; i++){
        variavelTemp = lista[i];
        lista[i] = lista[tamanhoLista-1-i];
        lista[tamanhoLista-1-i] = variavelTemp;
    }
    for ( int num = 0 ; num < tamanhoLista; num++){
        if (num < tamanhoLista - 1){
            cout << lista[num] << " - ";
        }else{
            cout << lista[num];
        }
    }
return 0;
}
