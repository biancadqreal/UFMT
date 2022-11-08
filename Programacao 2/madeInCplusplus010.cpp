#include <iostream>

using namespace std;

int passa(int v[]){
    int i;
    for(i=0;i<10;i++){
        if(v[i] % 2 == 0)
            cout << v[i];
    }
}

int main(){
    int i, v[10];
    for(i=0;i<10;i++){
        cin>>v[i];
    }
    passa(v);
    
}
