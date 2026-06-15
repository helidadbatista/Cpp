/*Aula 15/06/2026
Professora: Erika Dilly
Aluna: Hélida Dias Batista Xerfan
*/
#include<iostream>
#include<string>
#include<locale>
#include <windows.h>
using namespace std;

class Medico {
    private:
        string nome;
        string especialidade;
        string crm;

    public:
        Medico(string nome, string especialidade, string crm) {
            this->nome = nome;
            this->especialidade = especialidade;
            this->crm = crm;
        }

        void realizarConsulta(string paciente) {
            cout << "Dr." << nome << ", " << especialidade << " (CRM: " << crm << "), realizou a consulta do " << paciente << "." << endl;
        }

        void receitarMedicamento(string paciente, string medicamento) {
            cout << "Dr." << nome << ", " << especialidade << " (CRM: " << crm << "), prescreveu " << medicamento << " para o paciente " << paciente << "." << endl;
        }


};

class Paciente {
    private:
        string nome;
        int idade;

    public:
        Paciente(string nome, int idade) {
            this->nome = nome;
            this->idade = idade;
        }

        void marcarConsulta(string data, string hora, string medico) {
            cout << "Paciente " << nome << ", " << idade << " anos, marcou uma consulta para " << data << " às " << hora << " com o dr " << medico << "." << endl;
        }
};

int main () {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    
    Paciente paciente("Hélida", 31);
    paciente.marcarConsulta("15/06/2023", "14:00", "Rodrigo");

    Medico medico("Rodrigo", "Ginecologista", "12345-GO");
    medico.realizarConsulta("Hélida");
    medico.receitarMedicamento("Hélida", "Paracetamol");



    return 0;

}
