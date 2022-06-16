#include <iostream>
#include <curses.h>
using namespace std;

int main(){
    /* Dichiaro le variabili che mi servono per il programma 
        val1 = primo valore scelto dall'utente
        val2 = secondo valore scelto dall'utente
        scelta = variabile per la scelta dell'operazione
    */
    int val1 = 0, val2 = 0, scelta = 0; 

    /* Pulisco il terminale per lasciare spazio al programma */
    system("clear");

    /* Interfaccia grafica di presentazione con nome e programmatore */
    cout << "#######################################################" << endl;
    cout << "#                                                     #" << endl;
    cout << "#                    Calcolatrice                     #" << endl;
    cout << "#                      di Metta                       #" << endl;
    cout << "#                                                     #" << endl;
    cout << "#######################################################" << endl;

    /* Spazitura dal titolo */
    cout << endl;

    /* Richiesta ed inserimento dei valori da parte dell'utonto */
    cout << "Inserisci il primo valore per l'operazione" << endl << "-->";
    cin >> val1;
    cout << "Inserisci il secondo valore per l'operazione" << endl << "-->";
    cin >> val2;

    /* Pulizia del terminale in modo da rendere la schermata chiara */
    system("clear");

    /* Interfaccia grafica per il menu della scelta dell'operazione con scelta da parte dell'utonto */
    cout << "#######################################################" << endl;
    cout << "#                                                     #" << endl;
    cout << "#                Seleziona l'operazione               #" << endl;
    cout << "#                                                     #" << endl;
    cout << "#                    1) Addizione                     #" << endl;
    cout << "#                   2) Sottrazione                    #" << endl;
    cout << "#                  3) Moltiplicazione                 #" << endl;
    cout << "#                    4) Divisione                     #" << endl;
    cout << "#                                                     #" << endl;
    cout << "#######################################################" << endl;
    cout << "-->";
    cin >> scelta;

    /* Pulizia del terminale */
    system("clear");

    /* Switch con le casistiche permesse all'utente */
    switch(scelta){
        /* Addizione */
        case 1:
            cout << "Il risultato dell'addizione è: " << val1 + val2 << "." << endl;
            break;
        /* Sottrazione */
        case 2:
            cout << "Il risultato della sottrazione è: " << val1 - val2 << "." << endl;
            break;
        /* Moltiplicazione */
        case 3:
            cout << "Il risultato della moltiplicazione è: " << val1 * val2 << "." << endl;
            break;
        /* Divisione con controlli del denominatore, del divisore e del resto */
        case 4:
            if(val2==0){
                cout << val1 << "/" << val2 << " è indeterminato." << endl;
            }else if(val1==0){
                cout << val1 << "/" << val2 << " è impossibile." << endl;
            } 
            if(val1%val2==1){
                cout << "Il risultato della divisione è: " << val1/val2 << ", con resto: " << val1%val2 << "." << endl;
            }else{
                cout << "Il risultato della divisione è: " << val1/val2 << "." << endl;
            }
            break;
        default:
            cout << "Hai immesso un operatore sbagliato." << endl;
    }
    return 0;
}