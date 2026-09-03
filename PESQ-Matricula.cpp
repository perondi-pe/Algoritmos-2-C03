#include <iostream>
#include "busca.h"
using namespace std;

int main(){
    int N;
    cin >> N;
    cin.ignore();
    
    int tamanho = 0;
    dados vetor[100];
    
    for(int i = 0; i < N; i++){
        getline(cin, vetor[i].nome);
        cin >> vetor[i].curso;
        cin >> vetor[i].matricula;
        cin.ignore();
        
        tamanho++;
    }
    
    string x;
    getline(cin, x);
    
    int posicao = sequencial(vetor,tamanho,x);
    
    if(posicao != -1){
        cout << vetor[posicao].nome << endl;
        cout << vetor[posicao].curso << endl;
        cout << vetor[posicao].matricula << endl;
    }
    else{
        cout << "Aluno nao encontrado" << endl;
    }
    return 0;
}

//Adicionar isso ao busca.h:
//#include <string>
//using namespace std;
//struct dados{
//    string nome;
//    string curso;
//    int matricula;
//};
// e alterar a linha do sequencial e binaria, colocar "dados " antes do vetor e trocar int por string no x.
//em busca.cpp fazer a msm troca
// em busca.cpp colocar ".nome" em "vetor[i]"(em sequencial) e nos dois "vetor[meio]"(em binaria).
