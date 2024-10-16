#include <iostream>
using namespace std;

int main(){
    int i, j, k, a, saidas=0;
    cin >> a;
    for(i=0; i<a; i++){
        for(j=0; j<a; j++){
            for(k=0; k<a; k++){
                cout << "baka" << endl;
                saidas++;
            }
        }
    }
    cout << "Foram: " << saidas << " saidas" << endl;

    return 0;
}