#include <iostream>
#include "busca.h"
using namespace std;

int main(){
    int N;
    cin >> N;
    int vetor[10001];
    int tamanho = 1;
    for(int i = 0; i < N; i++){
        cin >> vetor[i];
        tamanho++;
    }
    int x;
    cin >> x;
    int corredor = binaria( vetor,tamanho, x);
    if(corredor != -1){
        cout << "Corredor " << corredor;
    }
    else{
        cout << "Nao localizado";
    }
    return 0;
}
