#include <iostream>

using namespace std;

double fahrenheit_to_celsius(double x){
    return (x-32)*5/9;
}
int main(){
double a;
cout << "Digite um valor em Fahrenheit: ";
cin >> a;
cout << "O valor em celsius é: " << fahrenheit_to_celsius(a);
}
