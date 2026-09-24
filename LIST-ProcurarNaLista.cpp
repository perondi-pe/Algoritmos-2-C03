#include <iostream>
#include <list>
using namespace std;

bool encontrar(list<int> lista, int x){
    bool achou = NULL;
    list<int>::iterator p;
    for(p = lista.begin(); p != lista.end(); p++){
        if(*p == x){
            achou = true;
            break;
        }
        else{
            achou = false;
        }
    }
    return achou;
}

int main(){
    list <int> lista;
    int numeros, x;
    
    cin >> numeros;
    while(numeros != 0){
        lista.push_back(numeros);
        cin >> numeros;
    }
    cin >> x;
    bool resposta = encontrar(lista, x);
    if(resposta){
        cout << "Encontrado";
    }
    else{
        cout << "Nao encontrado";
    }
    return 0;
}
