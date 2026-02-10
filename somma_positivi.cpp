// Programma C++ per il calcolo della somma dei numeri positivi
#include <iostream>

int main() {
    int n;
    int somma = 0;

    std::cout << "Inserisci numeri (0 per terminare):" << std::endl;

    while (true) {
        if (!(std::cin >> n)) {
            std::cout << "Input non valido. Inserire un numero intero." << std::endl;
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            continue;
        }

        if (n == 0) break;

        if (n > 0) {
            somma += n;
        }
    }

    std::cout << "La somma dei numeri positivi è: " << somma << std::endl;

    return 0;
}







