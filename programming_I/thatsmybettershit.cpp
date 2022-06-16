#include <iostream>
using namespace std;

int main(){
	int v = 0;

	cout << "Inserisci un numero intero: 13" << endl << "-->";
	cin >> v;
	while(v!=13){
		cout << "Riprova!" << endl << "-->";
		cin >> v;
	}
	cout << endl;
	cout << "Il valore inserito è: " << v << "." << endl;
	
	return 0;
}
