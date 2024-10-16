#include <iostream>
    
using namespace std;

int main()
{
    int N;
    cin >> N;
    int MatrizExemplo[N][N];
    for(int i =0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> MatrizExemplo[i][j];
        }
    }
    int Pares = 0;
    for(int i =0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(MatrizExemplo[i][j]%2 == 0){
                Pares ++;
            }
        }
    }

    cout << "Quantia de Numeros Pares na Matriz: " << Pares << endl;
    
    return 0;
}
