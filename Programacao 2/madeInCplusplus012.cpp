#include <iostream>

using namespace std;

int main() {
    int num, a, i;
    int som = 0;
    cout << "Leia a quantidade de termos que você quer colocar no somatório: ";
    cin >> num;
    
    for(i=0;i<num;i++){
        cout << "Me diga o valor de a: ";
        cin >> a;
        som = som + a;
    }
    int media = som / num;
    cout << "a somatória desses termos é: ";
    cout << som << endl;
    cout << "A média aritmética desses termos é: ";
    cout << media;
    
    
}
