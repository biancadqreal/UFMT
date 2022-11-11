#include <iostream>
#include <string>

using namespace std;

int main(){
    int punct_cnt; 
    string str("some string.");
    
    for (auto c : str)
        if (ispunct(c)) //Verifica se a string tem ponto
            ++punct_cnt;
    cout << punct_cnt;
}
