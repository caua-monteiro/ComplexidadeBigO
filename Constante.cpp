#include <iostream>
using namespace std;

int soma(int a, int b){
    return  a + b;
}

int main(){
    int a, b;
    cout << "Digite o primeiro valor: ";
    cin >> a;
    cout << "Digite o segundo valor: ";
    cin >> b;
    cout << "Soma: " << soma(a,b) << endl;

    return 0;
}