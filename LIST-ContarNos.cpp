#include <iostream>
#include <list>
using namespace std;

int contar(list<int> lista){
    int quantidade = 0;
    list<int>::iterator p;
    for(p = lista.begin(); p != lista.end(); p++){
        quantidade++;
    }
    return quantidade;
}

int main(){
    list<int> lista;
    int x;
    
    cin >> x;
    while(x != 0){
        lista.push_back(x);
        cin >> x;
    }
    
    int contador = contar(lista);
    cout << contador;
    
    return 0;
}
