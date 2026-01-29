// Programma C++ per il calcolo della somma dei numeri positivi

#include <iostream>
using namespace std;

int main(){
    int n, somma = 0;
    
    cout << "Inserisci numeri (0 per terminare):" << endl;
    
    while (true){
        cin >> n;
        if(n == 0) break;
        if(n > 0) {
            somma += n;
        }
    }
    
    cout << "La somma dei numeri positivi è: " << somma << endl;
    

    return 0;
}






