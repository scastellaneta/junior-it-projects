cpp
#include <iostream>

using namespace std;

int main(){
    int numeri[]={3,-1,7,-5,0,4};
    int somma = 0;


    for(int i = 0; i < 5;i++){
        if(numeri[i]>0){
            somma += numeri[i];
        }
    }

    cout<<"La somma dei numeri positivi è:"<<somma<<endl;


return 0;
}

