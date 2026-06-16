#include<iostream>
#include<iomanip>
#include<locale>
#include <windows.h>
using namespace std;

class ContaBancaria {
    private:
        string titular;
        double saldo;

    public:
        ContaBancaria(string titular, double saldo){
            this->titular = titular;
            this->saldo = saldo;
        }

        void depositar(double valor){
            saldo += valor;
            cout << "Depósito realizado no valor de R$" << fixed << setprecision(2) << valor << "\nSaldo atual: R$" << fixed << setprecision(2) << saldo << endl;
        }

        void sacar(double valor){
            if (valor > saldo) {
                cout << "Saldo insuficiente! Saldo atual: R$" << fixed << setprecision(2) << saldo << endl;
            } else {
                saldo -= valor;
                cout << "Saque realizado no valor de R$" << fixed << setprecision(2) << valor << "\nSaldo atual: R$" << fixed << setprecision(2) << saldo << endl;
            }
        }

        void mostrarSaldo(){
            cout << "Titular: " << titular << ", Saldo atual: R$" << fixed << setprecision(2) << saldo << endl;
        }
};

int main () {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    ContaBancaria conta1("Hélida", 500000.00);
    conta1.mostrarSaldo();

    cout <<endl;
    conta1.depositar(150000.00);
    cout <<endl;
    conta1.sacar(200000.00);
    cout <<endl;
    conta1.mostrarSaldo();

    return 0;
}