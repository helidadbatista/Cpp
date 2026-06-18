/* Aula 17/06/2026
Professora: Erika Dilly
Aluna: Hélida Dias Batista Xerfan
*/

#include <iostream>
#include <string>

using namespace std;

class Veiculo {
private:
    string marca;

public:
    Veiculo(string m) {
        marca = m;
    }

    void mostrarMarca() {
        cout << "Marca: " << marca << endl;
    }
};

class Carro : public Veiculo {
private:
    string modelo;

public:
    Carro(string marca, string mod) : Veiculo(marca) {
        modelo = mod;
    }

    void mostrarDados() {
        mostrarMarca();
        cout << "Modelo: " << modelo << endl;
    }
};

int main() {
    Carro c1("Toyota", "Corolla");

    c1.mostrarDados();

    return 0;
}