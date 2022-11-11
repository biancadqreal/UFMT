#include <iostream>

using namespace std;

int main(){
    int letra = 0;
    string s = "contaletra";
    for(auto c : s)
        ++letra;
    cout << letra;
}
