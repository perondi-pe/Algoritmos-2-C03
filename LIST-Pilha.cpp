#include <iostream>
#include <list>
using namespace std;

int main(){
    list <int> pilha;
    int x;
    for(int i = 0; i < 4; i++){
        cin >> x;
        pilha.push_front(x);
    }
    for(int i = 0; i < 4; i++){
        cout << *pilha.begin() << " ";
        pilha.pop_front();
    }
    return 0;
}
