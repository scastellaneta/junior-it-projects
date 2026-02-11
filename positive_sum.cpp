cpp

#include <iostream>

using namespace std;

int main(){

    int n;
    float voto, somma = 0;

    cout<<"Quanti voti vuoi inserire?";
    cin>>n;

    for(int i = 1; i <= n; i++){
        cout << "Inserisci voto " << i << ":";
        cin >> voto;
        somma += voto;

    }

    float media = somma / n;

    cout << "La media e':" << media << endl;

    if(media >= 6){
        cout<<"Promosso!\n";
    }
    else{
        cout<<"Bocciato!\n";
    }
    
return 0;
    
}  





