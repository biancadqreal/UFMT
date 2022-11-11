#include <iostream>

using namespace std;  

int main(){
    string str("some string");
    
    for (auto c : str) //Lê cada caractere em uma string
        cout << c << endl;
}
