#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> estoque;
    list<int> venda;
    int N;
    int codigo;
    int tipo;
    
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> tipo;
        if(tipo == 1){
            cin >> codigo;
            estoque.push_back(codigo);
        }
        else if(tipo == 2){
            venda.push_front(estoque.front());
            estoque.pop_front();
        }
    }
    list<int>::iterator ponteiroVenda;
    list<int>::iterator ponteiroEstoque;
    
    cout << "Estoque: ";
    for(ponteiroEstoque = estoque.begin(); ponteiroEstoque != estoque.end(); ponteiroEstoque++){
        cout << *ponteiroEstoque << " ";
    }
    cout << endl;
    cout << "Venda: ";
    for(ponteiroVenda = venda.begin(); ponteiroVenda != venda.end(); ponteiroVenda++){
        cout << *ponteiroVenda << " ";
    }
    return 0;
}
