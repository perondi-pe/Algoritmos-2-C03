#include <iostream>
#include <list>
using namespace std;

int main(){
    list <int> fila;
    int x;
    for(int i = 0; i < 4; i++){
        cin >> x;
        fila.push_back(x);
    }
    for(int i = 0; i < 4; i++){
        cout << *fila.begin() << " ";
        fila.pop_front();
    }
}
