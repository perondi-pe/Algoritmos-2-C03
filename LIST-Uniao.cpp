#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> ListaUm;
    list<int> ListaDois;
    
    list<int>::iterator PonteiroUm;
    list<int>::iterator PonteiroDois;
    
    int x;
    
    cin >> x;
    while(x != 0){
        ListaUm.push_back(x);
        cin >> x;
    }
    cin >> x;
    while(x != 0){
        ListaDois.push_back(x);
        cin >> x;
    }
    
    list<int> Uniao;
    
    PonteiroUm = ListaUm.begin();
    PonteiroDois = ListaDois.begin();
    
    while(PonteiroUm != ListaUm.end() && PonteiroDois != ListaDois.end()){
        if(*PonteiroUm == *PonteiroDois){
            Uniao.push_back(*PonteiroUm);
            PonteiroUm++;
            PonteiroDois++;
            continue;
        }
        else if(*PonteiroUm < *PonteiroDois){
            Uniao.push_back(*PonteiroUm);
            PonteiroUm++;
        }
        else{
            Uniao.push_back(*PonteiroDois);
            PonteiroDois++;
        }
    }
    
    while(PonteiroUm != ListaUm.end()){
        Uniao.push_back(*PonteiroUm);
        PonteiroUm++;
    }

    while(PonteiroDois != ListaDois.end()){
        Uniao.push_back(*PonteiroDois);
        PonteiroDois++;
    }
    
    for(int valor : Uniao){
        cout << valor << " ";
    }
    
    return 0;
}
