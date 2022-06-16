#include <iostream>
using namespace std;

int main(){
    int scelta = 0;

    cout << "#################################################" << endl;
    cout << "#                                               #" << endl;
    cout << "#                 1) Opzione A                  #" << endl;
    cout << "#                 2) Opzione B                  #" << endl;
    cout << "#                 3) Opzione C                  #" << endl;
    cout << "#                 4) Opzione D                  #" << endl;
    cout << "#                                               #" << endl;
    cout << "#################################################" << endl;
    cout << "-->";
    cin >> scelta;

    switch(scelta){
        case 1:
            cout << "Hai scelto l'opzione A" << endl;
            break;
        case 2:
            cout << "Hai scelto l'opzione B" << endl;
            break;
        case 3:
            cout << "Hai scelto l'opzione C" << endl;
            break;
        case 4:
            cout << "Hai scelto l'opzione D" << endl;
            break;
        default:
            cout << "Scelta non valida, fottiti ;)" << endl;
    }

    return 0;
}