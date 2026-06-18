/*Aula 17/06/2026
Professora: Erika Dilly
Aluna: Hélida Dias Batista Xerfan
*/

#include <iostream>
#include <string>
#include <locale>
#include <windows.h>

using namespace std;

class Funcionario {
protected:
    float salario;

public:
    Funcionario(float s) {
        salario = s;
    }

    void mostrarSalario() {
        cout << "Salario: R$ " << salario << endl;
    }
};

class Gerente : public Funcionario {
public:
    Gerente(float s) : Funcionario(s) {}

    void mostrarSalario() {
        cout << "Salario + bonus de 20%: R$ "
             << salario * 1.2 << endl;
    }
};

int main() {
    Funcionario f(3000);
    Gerente g(3000);

    cout << "Funcionario:" << endl;
    f.mostrarSalario();

    cout << "\nGerente:" << endl;
    g.mostrarSalario();

    return 0;
}