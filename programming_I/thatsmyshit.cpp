#include <iostream>
using namespace std;

int main(){
	int v = 0;

	cout << "Inserisci un numero intero maggiore di 255: " << endl << "-->";
	cin >> v;
	while(v<255){
		cout << "Riprova!" << endl << "-->";
		cin >> v;
	}
	cout << endl;
	cout << "Il valore inserito è: " << v << "." << endl;
	
	return 0;
}
