cpp

#include <iostream>
using namespace std;

int main(){

    int n;                // numero di voti da inserire
    float voto;           // voto inserito dall'utente
    float somma = 0;      // somma totale dei voti

    // chiedo quanti voti vuole inserire l'utente
    cout<<"Quanti voti vuoi inserire?";
    cin>>n;

    // controllo se il numero è valido
    if(n <= 0){
         cout << "Numero non valido";
         return 0;
    }
    
    // controllo se il numero è valido
    for(int i = 1; i <= n; i++){
        cout << "Inserisci voto " << i << ":";
        cin >> voto;
        somma += voto;
    }

    // calcolo della media
    float media = somma / n;

    // stampa della media
    cout << "La media e':" << media << endl;

    // controllo promozione o bocciatura
    if(media >= 6){
        cout<<"Promosso!\n";
    }
    else{
        cout<<"Bocciato!\n";
    }
    
    return 0;
    
}  






