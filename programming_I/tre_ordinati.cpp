#include <iostream>
using namespace std;

int main(){
    int a = 0, b = 0, c = 0;
    
    cout << "Inserisci il primo numero" << endl << "-->";
    cin >> a;
    cout << "Inserisci il secondo numero" << endl << "-->";
    cin >> b;
    cout << "Inserisci il terzo numero" << endl << "-->";
    cin >> c;

    if((a < b && b < c) || (a > b && b > c)){
        cout << "La sequenza è ordinata." << endl;
    }else{
        cout << "La sequenza non è ordinata." << endl;
    }
}