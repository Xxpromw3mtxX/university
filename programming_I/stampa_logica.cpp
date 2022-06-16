#include <iostream>
using namespace std;

int main(){
    int a = 0, b = 0;

    cout << "Inserisci il valore di A: " << endl << "-->";
    cin >> a;
    cout << endl << "inserisci il valore di B: " << endl << "-->";
    cin >> b;
    cout << endl << "Valore di A: " << a << ", valore di B: " << b << endl << (a<b) << endl;
    return 0;
}