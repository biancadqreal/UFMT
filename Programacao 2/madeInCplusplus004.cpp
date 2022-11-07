#include <iostream>

using namespace std;

int soma(int x, int y){
    cout << "A soma de " << x << " e " << y << " é " << x+y;
}

int main(){
    int a, b;
    cout << "Digite o valor de a: ";
    cin >> a;
    
    cout << "Digite o valor de b: ";
    cin >> b;
    soma(a, b);
}
