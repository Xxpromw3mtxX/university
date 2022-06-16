#include <iostream>
using namespace std;

int main(){
    int a = 1, b = 69, i = 0;

    cout << "Inserci un numero: " << endl << "-->";
    cin >> i;

    if(i<a || i>b){
        cout << "Non è compreso." << endl;
    }else{
        cout << "Il numero è compreso." << endl;
    }

    return 0;
}