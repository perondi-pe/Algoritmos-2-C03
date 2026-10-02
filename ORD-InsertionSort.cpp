#include<iostream>
#include "ordenacao.h"
using namespace std;

int main(){
    int vetor[100];
    int aux;
    int tamanho = 0;
    
    cin >> aux;
    while(aux != 0){
        vetor[tamanho] = aux;
        tamanho++;
        cin >> aux;
    }
    insercaoDireta(vetor, tamanho);
    
    for(int i = tamanho - 1; i >= 0; i--){
        cout << vetor[i] << " ";
    }
    return 0;
}
