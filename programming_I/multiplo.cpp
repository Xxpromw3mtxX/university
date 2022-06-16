#include <iostream>
using namespace std;

int main(){
    int num = 0, multi = 0;

    cout << "Inserisci il numero" << endl << "-->";
    cin >> num;
    cout << "Inserisci il multiplo" << endl << "-->";
    cin >> multi;

    if(num % multi == 1){
        cout << "Il numero: " << num << ", non è multiplo di: " << multi << endl;
    }else{
        cout << "Il numero: " << num << ", è multiplo di: " << multi << endl;
    }
}