/*Aula 15/06/2026
Professora: Erika Dilly
Aluna: Hélida Dias Batista Xerfan
*/
#include<iostream>
#include<string>
#include<locale>
#include <windows.h>
using namespace std;


class Pessoa{
    private:
        string nome;
        int idade;
    public:
        Pessoa(string nome, int idade){
            this->nome = nome;
            this->idade = idade;
        }
        void mostrar(){
            cout << "Nome: " << nome << ", " << idade << "anos" << endl;
        }
};

int main () {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    Pessoa p1("Hélida", 31);
    Pessoa p2("João", 25);
    
    p1.mostrar();
    p2.mostrar();

    return 0;
}