#include <iostream>
using namespace std;

int main(){
    int a = 0, b = 0;

    cout << "Inserci il primo numero: " << endl << "-->";
    cin >> a;
    cout << "Inserci il secondo numero: " << endl << "-->";
    cin >> b;

    if(a<b){
        cout << "Il puù grosso è: " << b << endl;
    }else{
        cout << "Il puù grosso è: " << a << endl;
    }

    return 0;
}