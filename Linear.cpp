#include <iostream>
using namespace std;

void leitura(int *v,int n){
    for(int i = 0;i < n;i++){
        cin >> v[i];
    }
}

void saida(int *v,int n){
    for(int i = 0;i < n;i++){
        cout << v[i] << endl;
    }
}

int main(){
    int n;
    cin >> n;
    int v[n];
    leitura(v,n);
    saida(v,n);

    return 0;
}