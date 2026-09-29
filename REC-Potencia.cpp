#include <iostream>
using namespace std;

int potencia(int a, int n){
    int valor;
    
    if(n == 0){
        return 1;
    }
    else{
        valor = a * potencia(a, n-1);
        return valor;
    }
}

int main(){
    int a;
    int n;
    
    cin >> a;
    cin >> n;
    
    int resposta = potencia(a, n);
    
    cout << resposta;
    
    return 0;
}
