#include <iostream>
#include <vector>
#include <algorithm>
    
using namespace std;

int Busca(vector <int> vec, int item);

int main(){
    int N;
    cin >> N;
    vector <int> Vetor;

    for(int i = 0; i < N; i++){
        int Entrada;
        cin >> Entrada;
        Vetor.push_back(Entrada);
    }

    int Find;
    cin >> Find;
    int Resposta = Busca(Vetor, Find);
    cout << "Posicao: " << Resposta << endl;
    
    return 0;
}

int Busca(vector <int> vec, int item){
    int Start = 0, End = vec.size() - 1;
    int *S = NULL, *E = NULL;
    S = &Start;
    E = &End;

    if(*S <= *E){
        int Meio = (*S + *E) / 2;

        if(vec[Meio] == item)
            return Meio;
    
        if(vec[Meio] < item){
            *S = Meio + 1;
            cout << "Start passa a ser: " << *S << " // " << Start << endl;
            Busca(vec, item);
        }
        else{
            *E = Meio - 1;
            cout << "End passa a ser: " << *E << " // " << End << endl;
            Busca(vec, item);
        }
    }
    return -1;
}

