#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double calculo(double x, double x0, double e){
    double novoX0 = (x0 * x0 + x)/(2 * x0);
    
    if(abs(x0 * x0 - x) <= e){
        return x0;
    }
    else{
        return calculo(x, novoX0, e);
    }
}

int main(){
    double x;
    double x0;
    double e;
    
    cin >> x;
    cin >> x0;
    cin >> e;
    
    double resposta = calculo(x, x0, e);
    
    cout << fixed << setprecision(4);
    cout << resposta << endl;
}
