#include <iostream>
using namespace std;

int main(void){
    const int lato_max = 30;
    int lato;

    do{
        cout << "Inserisci il lato" << endl << "-->";
        cin >> lato;
    }while(lato < 1 || lato > lato_max);

    for(int i = 0; i < lato * lato; i++){
        cout << "#";
        if((i + 1) % lato == 0) cout << endl;
    }

    return 0;
}