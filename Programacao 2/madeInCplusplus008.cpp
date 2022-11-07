#include <iostream>

using namespace std;

int retorna_maior(int x, int y){
    if(x>y)
        return x;
    else
        return y;
}

int main(){
    int a, b;
    cout << "Digite um valor: ";
    cin >> a;
    cout << "Digite outro valor: ";
    cin >> b;
    cout << retorna_maior(a, b);
}
