/*Aula 15/06/2026
Professora: Erika Dilly
Aluna: Hélida Dias Batista Xerfan
*/
#include<iostream>
#include<string>
#include<locale>
#include <windows.h>
using namespace std;


class Animal {
    private:
        string especie;
        string som;

    public:
        Animal(string especie, string som) {
            this->especie = especie;
            this->som = som;
        }

        void emitir_som() {
            cout << "A espécie " << especie << " emite o som: " << som << "." << endl;
        }
};

int main () {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    Animal cachorro("Cachorro", "Au Au");
     cachorro.emitir_som();

    Animal galo("Galo", "Co co ri có");
    galo.emitir_som();

    Animal gato("Gato", "Miau");
    gato.emitir_som();

    Animal vaca("Vaca", "Muu");
    vaca.emitir_som();

    return 0;

}