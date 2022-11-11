#include <iostream>
#include <string>

using namespace std;

int main(){
    string str("some string.");
    
    for (auto &c : str) //Note que devemos entrar no endereço de memória para alterar c por dentro
        c = toupper(c);//Deixa as letras de c maiúsculas
    cout << str;
        
}
