#include <iostream>
using namespace std;

int main(){
    int a = 0, b = 0, x = 0;
    cout << "Inserisci il valore di A: \n -->";
    cin >> a;
    cout << "Inserisci il valore di B: \n -->";
    cin >> b;
    cout << "Inserisci il valore di ICS: \n -->";
    cin >> x;

    cout << endl << ((a<=x)&&(x<=b)) << endl;
    return 0;
}