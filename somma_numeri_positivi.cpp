cpp
#somma_numeri_positivi.cpp

#include <iostream>

using namespace std;

int main(){
    int numeri[]={3,-1,7,-5,0,4};
    int somma = 0;

    int dimensione = sizeof(numeri)/sizeof(numeri[0]);
    
    for(int i = 0; i < dimensione;i++){
        if(numeri[i]>0){
            somma += numeri[i];
        }
    }

    cout<<"La somma dei numeri positivi è:"<<somma<<endl;


return 0;
}



