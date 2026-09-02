#include <iostream>
#include "busca.h"
using namespace std;

int main(){
    int vetor[21];
    int aux;
    int i = 0;
    cin >> aux;
    while(aux != -1){
        vetor[i] = aux;
        i++;
        cin >> aux;
    }
    int x;
    cin >> x;
    int tamanho = i;
    int acesso = binaria( vetor, tamanho, x);
    if(acesso != -1){
        cout << "Possui acesso";
    }
    else{
        cout << "Nao possui acesso";
    }
}
