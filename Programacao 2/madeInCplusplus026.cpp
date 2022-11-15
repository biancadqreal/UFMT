#include<iostream>
#include<algorithm>
using namespace std;
main() {
string frase;
cout << "Digite uma frase: ";
getline(cin, frase);
cout << "String com espaços :" << frase << endl;
remove(frase.begin(), frase.end(), ' ');
cout << "String sem espaços :" << frase;
}
