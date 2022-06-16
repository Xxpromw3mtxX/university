#include <iostream>
using namespace std;

int main(){
    int voto = 0;

    cout << "Inseriscire il votazione: " << endl << "-->";
    cin >> voto;
    cout << endl;

    if(voto >= 27){
        cout << "Programmazione I è veramente uno dei migliori corsi di Informatica!!" << endl;
    }else{
        cout << "Quel def..." << endl;
    }
    return 0;
}