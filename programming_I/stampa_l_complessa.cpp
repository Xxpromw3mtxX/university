#include <iostream>
using namespace std;

int main(){
    int a = 0, b = 0, c = 0;

    cout << "Inserisci il valore di A: \n -->";
    cin >> a;
    cout << "Inserisci il valore di B: \n -->";
    cin >> b;
    cout << "Inserisci il valore di C: \n -->";
    cin >> c;
    cout << "A: " << a << endl << "B: " << b << endl << "C: " << c << endl << ((a<b)||(a<c)) << endl;
    
    return 0;
}