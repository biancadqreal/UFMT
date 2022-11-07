#include <iostream>

using namespace std;

int main(){
    int v[10], v2[10];
    cout << "Insere os valores de i em v: " << endl;
    for(int i = 0; i < 10; i++)
        cin >> v[i];
    for(int i = 0; i < 10; i++)
        cout << v[i] << endl;
    cout << "Os valores de v foram transferidos para v2:";
    for(int i = 0; i < 10; i++){
        v2[i] = v[i];
        cout<<v2[i];
    }
}
