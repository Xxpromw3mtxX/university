#include <iostream>
using namespace std;

int main(void){
    int n = 0, fat = 0;
    cout << "Inserisci il numero di cui fare il fattoriale" << endl << "-->";
    cin >> n;

    while(n==0){
        cout << "Inserisci un numero diverso da 0." << endl;
        cout << "Immetti un nuovo numero diverso da 0." << endl << "-->";
        cin >> n;
    }

    fat = n;

    for (int m = n - 1 ; m >= 1; m--) fat *= m ;

    cout << "Il fattoriale di " << n << " è: " << fat << endl;
    return 0;
}