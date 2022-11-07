#include <iostream>

using namespace std;

double quadrado(double x){
    return x * x;
}

double imprime_quadrado(double x){
    cout << "O valor do quadrado de x é " << quadrado(x);
}

int main(){
  imprime_quadrado(3);
}
