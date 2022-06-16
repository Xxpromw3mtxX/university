#include <iostream>
using namespace std;

int main(){
    const int gea = 40;
    int n = 0, sum = 0, max = 0, num = 0;

    do{
        cout << "Inserisci quanti numeri vuoi sommare" << endl << "-->";
        cin >> n;
        if (n < 0 || n > gea){
            cout << "Il numero che hai inserito non è accetabile." << endl;
        }
    }while(n <= 0 || n > gea);

    for(int i = 0; i<=n; i++){
        cout << "Inserisci un numero" << endl << "-->";
        cin >> num;
        sum = sum + num;
        if (num > max){
            max = num;
        }
    }

    cout << "La somma dei: " << n << " numeri inseriti è: " << sum << endl;
    cout << "Il massimo è: " << max << endl;

    return 0;
}