#include <iostream>

using namespace std;

int reset(int &x){//Altera o endereço de memória de j que recebe 42 para 0
    x = 0;
    return x;
}

int main()
{
    int j = 42; 
    cout << reset(j);

    return 0;
}
