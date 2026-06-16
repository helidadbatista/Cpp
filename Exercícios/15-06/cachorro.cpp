/*Aula 15/06/2026
Professora: Erika Dilly
Aluna: Hélida Dias Batista Xerfan
*/
#include<iostream>
#include<string>
#include<locale>
#include <windows.h>
using namespace std;

class Cachorro{
    private:
        string nome;
        string raca;

    public:
        Cachorro(string nome, string raca){
            this->nome = nome;
            this->raca = raca;
        }

        void latir(){
            cout << "Au au!" << endl;
            cout << "O cachorro " << nome << " da raça " << raca << " está latindo!" << endl;
        }
};


int main () {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    Cachorro cachorrinho("Rex", "caramelo");
    cachorrinho.latir();

    return 0;
}