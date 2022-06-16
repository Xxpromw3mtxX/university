#include <iostream>
#include <curses.h>
using namespace std;

int main(){
    int val1 = 0, val2 = 0;

    cout << "Inserisci il primo numero" << endl << "-->";
    cin >> val1;
    cout << "Inserisci il secondo numero" << endl << "-->";
    cin >> val2;

    system("clear");

    if((val1 > 0 && val2 < 0) || (val1 < 0 && val2 > 0)){
        return 0;
    }

    if((val1 > 0 && val2 > MAXINT - val1) || (val1 < 0 && val2 < (MININT - val1))){
        cout << "Attenzione c'è stato un overflow!" << endl;
    }
    
    return 0;
}