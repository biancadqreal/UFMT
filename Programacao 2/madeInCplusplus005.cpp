#include <iostream>

using namespace std;

double media_aritmetica(double x, double y){
    cout << "A média aritmetica de " << x << " e " << y << " é " << (x+y)/2;
}

int main(){
    int a, b;
    cout << "Digite o valor de a: ";
    cin >> a;
    
    cout << "Digite o valor de b: ";
    cin >> b;
    
    media_aritmetica(a, b);
}
