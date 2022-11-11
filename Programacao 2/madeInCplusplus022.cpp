#include <iostream>
#include <string>

using namespace std;

void ehmaior(string a, string b){
    if(a > b)
        cout << "A primeira string é maior";
    else if(b > a)
        cout << "A segunda string é maior";
    else
        cout << "As strings são iguais";
    
}


int main(){
    string a, b;
    cout << "Digite a primeira string: ";
    cin >> a;
    
    cout << "Digite a segunda string: ";
    cin >> b;
    
    ehmaior(a, b);
}
