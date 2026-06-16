/*Aula 16/06/2026
Professora: Erika Dilly
Aluna: Hélida Dias Batista Xerfan
*/
#include<iostream>
#include<string>
#include<locale>
#include <windows.h>
using namespace std;

class ContaBancaria {
private:
    string titular;
    double saldo;


public:
    ContaBancaria(string nome, double valor) {
        titular = nome;
        saldo = valor;
    }

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
        } else {
            cout << "Valor de depósito inválido." << endl;
        }
    }

    bool sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            cout << "Saque realizado com sucesso.\nNovo saldo: " << saldo << endl;

            return true;
        } else {
            cout << "Valor de saque inválido ou saldo insuficiente." << endl;
            return false;
        }
    }

    void exibirSaldo() {
        cout << "Titular: " << titular << "\nSaldo: " << saldo << endl;
    }
};

int main () {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    ContaBancaria conta("Hélida", 1000.0);
    conta.exibirSaldo();

    conta.depositar(500.0);
    conta.sacar(200.0);
    conta.sacar(1500.0); // Tentativa de saque maior que o saldo

    return 0;
}