#include <iostream>

using namespace std;

int main(){
    int v[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "Os valores de x contidos dentro de v são: ";
    for(auto x : v) //Para cada de valor x contido em v
        cout << x;
}
