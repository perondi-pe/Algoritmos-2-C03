#include <iostream>
#include <list>
using namespace std;

int soma(list<int> lista){
    list<int>::iterator p;
    int resp = 0;
    for(p = lista.begin(); p != lista.end(); p++){
        resp += *p;
    }
    return resp;
}
int main(){
    list<int> lista;
    int x;
    cin >> x;
    while(x != 0){
        lista.push_back(x);
        cin >> x;
    }
    int resultado = soma(lista);
    cout << resultado;
    return 0;
}
