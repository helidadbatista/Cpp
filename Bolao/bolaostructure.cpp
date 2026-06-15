 /*Sistema de Bolão de Futebol para Copa do Mundo 2026
Acertar placar = 4 pontos  |  Acertar ganhador = 3 pontos   |   Acertar empate = 2 pontos   | Perder = 0 pontos
Terão 3 apostadores, cada um fará uma aposta;
 Os jogadores fazem as apostasantes dos jogos.
Resultado dos jogos:  Brasil 3x* Egito ; Russia 1x1 Marrocos; FRança 1x2 Argentina; Alemanha 4x2 Costa Rica;
O sistema deve calcular os pontos de cada jogador com base nos resultados dos jogos e nas apostas.
Classificar os jogadores com base nos pontos acumulados.
 */
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    //Informação dos apostadores
    struct Apostador{
        string nome;
        int pontos;
    };
    //Lista de apostadores
    vector<Apostador> apostadores;



    //Resultados dos jogos: time 1 com placar 1...
    struct Jogo{
        string time1, time2;
        int placar1, placar2;
    };

    //Lista com os resultados de cada jogo
    vector<Jogo> jogos = {
        {"Brasil", "Egito", 3, 0},
        {"Russia", "Marrocos", 1, 1},
        {"França", "Argentina", 1, 2},
        {"Alemanha", "Costa Rica", 4, 2}
    };

    struct Aposta {
        Apostador apostador;
        Jogo jogo = {"", "", 0, 0}; // Inicializa o jogo com valores padrão
        int palpite1;
        int palpite2;
        

    };
        cout << "***************************" << endl;
        cout << "Bolão do Iteam - Turma Full Stack Vespertino" << endl;


        cout << "Jogos do bolão:" << endl;
        for (const auto& jogo : jogos) {
            cout << jogo.time1 << " x " << jogo.time2 <<  endl;
        }


    //Cadastro dos apostadores
    for (int i = 0; i < 3; i++) {
        Apostador apostador; // 
        cout << endl;
        cout << "***************************" << endl;
        cout << "Nome do apostador " << i + 1 << ": ";
        cin >> apostador.nome;
        apostador.pontos = 0; // Inicializa os pontos do apostador
        apostadores.push_back(apostador); // Adiciona o apostador ao vetor

    

        //Apostas
        for(int j = 0; j < 4; j++){

            Aposta aposta;
            aposta.apostador = apostadores[i  %3]; // Atribui o apostador de forma cíclica
            aposta.jogo = jogos[j]; // Atribui o jogo correspondente
            cout << endl;
            cout << "Jogo: " << aposta.jogo.time1 << " x " << aposta.jogo.time2 << endl;
            cout << "Digite o palpite para " << aposta.jogo.time1 << ": ";
            cin >> aposta.palpite1;
            cout << "Digite o palpite para " << aposta.jogo.time2 << ": ";
            cin >> aposta.palpite2;
            cout << endl;

            // Calcular pontos com base no resultado do jogo e no palpite
            if (aposta.palpite1 == aposta.jogo.placar1 && aposta.palpite2 == aposta.jogo.placar2) {
                aposta.apostador.pontos += 10; // Acertar placar

            } else if ((aposta.palpite1 > aposta.palpite2 && aposta.jogo.placar1 > aposta.jogo.placar2) ||
                    (aposta.palpite1 < aposta.palpite2 && aposta.jogo.placar1 < aposta.jogo.placar2)) {
                aposta.apostador.pontos += 5; // Acertar ganhador

            } else if ((aposta.palpite1 == aposta.palpite2 && aposta.jogo.placar1 == aposta.jogo.placar2) ||
                    (aposta.palpite1 != aposta.palpite2 && aposta.jogo.placar1 != aposta.jogo.placar2)) {
                aposta.apostador.pontos += 2; // Acertar empate
            } 

            // Atualizar os pontos do apostador na lista de apostadores
            for (auto& a : apostadores) {
                if (a.nome == aposta.apostador.nome) {
                    a.pontos = aposta.apostador.pontos;
                    break;
                }
            }

        }


        
    }

        cout << "Ranking dos apostadores:" << endl;
        
        // Classificar os apostadores com base nos pontos acumulados (ordem decrescente)
        sort(apostadores.begin(), apostadores.end(), [](const Apostador& a, const Apostador& b) {
            return a.pontos > b.pontos;
        });
        
        // Exibir ranking
        for (size_t i = 0; i < apostadores.size(); i++) {
            cout << i + 1 << ". " << apostadores[i].nome << " - " << apostadores[i].pontos << " pontos" << endl;
        }
    
};
