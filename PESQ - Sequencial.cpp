#include <iostream>
#include "busca.h"
using namespace std;

int main(){
    int vetor[100];
    int i = 0;
    int auxiliar;
    
    cin >> auxiliar;
    
    while(auxiliar != -1){
        vetor[i] = auxiliar;
        i++;
        cin >> auxiliar;
    }
    
    int x;
    cin >> x;
    
    int tamanho = i;
    int posicao = sequencial(vetor, tamanho, x);
    if(posicao != -1){
        cout << x << " encontrado na posicao " << posicao;
    }
    else{
        cout << x << " nao encontrado";
    }
}
