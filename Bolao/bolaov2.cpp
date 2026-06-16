 /*Atividade de Prática - Bolão v2
Professora: Erika Dilly
Aluna: Hélida Dias Batista Xerfan
 
 Sistema de Bolão de Futebol para Copa do Mundo 2026
Acertar placar = 10 pontos  |  Acertar ganhador = 5 pontos   |   Acertar empate = 2 pontos   | Perder = 0 pontos
Terão 3 apostadores, cada um fará uma aposta;
 Os jogadores fazem as apostasantes dos jogos.
Resultado dos jogos:  Brasil 3x* Egito ; Russia 1x1 Marrocos; FRança 1x2 Argentina; Alemanha 4x2 Costa Rica;
O sistema deve calcular os pontos de cada jogador com base nos resultados dos jogos e nas apostas.
Classificar os jogadores com base nos pontos acumulados.
Exibir um ranking final (ordenado do maior para o menor pontuação) com: Nome do Apostador e pontuação 
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


class Jogo {
public:
    string time1;
    string time2;
    int placar1;
    int placar2;

    Jogo(string t1, string t2, int p1, int p2) : time1(t1), time2(t2), placar1(p1), placar2(p2) {}

};

class Apostador {
    private:
        string nome;
        int pontos;
    
        Apostador(string nome, int pontos) : nome(nome), pontos(pontos){}

    public:

        void apostar (string time1, string time2, int pontuacao1, int pontuacao2){

        }


};

int main () {
    vector<Apostador> apostadores;
    apostadores.emplace_back("Apostador 1");
    apostadores.emplace_back("Apostador 2");
    apostadores.emplace_back("Apostador 3");

    cout << "**********Menu**********" <<endl;
    cout<<endl;

    cout << "1 - Cadastrar Resultado dos jogos" << endl;
    cout << "2 - Cadastrar palpites dos apostadores" << endl;
    cout << "3 - Calcular pontuação" << endl;
    cout << "4 - Ebixir Ranking" <<endl;

    cout << "************************" <<endl;
    cout<<endl;


}



