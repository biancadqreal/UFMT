#include <iostream>

using namespace std;

int main(){
    int valor;
    int fatorial = 1;
    cin >> valor;
    while(valor>0){
        fatorial = fatorial * valor;
        valor--;
    }
    cout << fatorial;
}
