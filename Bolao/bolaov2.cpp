#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#ifdef _WIN32
#include <windows.h>
#endif

using namespace std;

// 1. Criação de estruturas para modelar as entidades do sistema
struct Partida {
    string time1;
    string time2;
    int resultado1 = -1; // -1 indica que a partida ainda não ocorreu
    int resultado2 = -1;
};

struct Apostador {
    string nome;
    int pontos = 0;
};

int calcularPontos(int p1, int p2, int resultado1, int resultado2) {
    if (p1 == resultado1 && p2 == resultado2)
        return 10;
    else if ((p1 > p2 && resultado1 > resultado2) ||
             (p1 < p2 && resultado1 < resultado2))
        return 5;
    else if (p1 == p2 && resultado1 == resultado2)
        return 5;
    else
        return 0;
}

// Passando o vetor por referência para salvar o dado permanentemente
void cadastroApostador(vector<Apostador>& apostadores) {
    Apostador novoApostador;
    cout << "Digite o nome do apostador: ";
    cin >> novoApostador.nome;
    apostadores.push_back(novoApostador);
    cout << "Apostador \"" << novoApostador.nome << "\" cadastrado com sucesso!\n";
}

// Agora adicionamos partidas dinamicamente
void adicionarPartida(vector<Partida>& partidas) {
    Partida novaPartida;
    cout << "Digite o nome do primeiro time (Mandante): ";
    cin >> novaPartida.time1;
    cout << "Digite o nome do segundo time (Visitante): ";
    cin >> novaPartida.time2;
    
    // Simulação: definindo o resultado real da partida no momento do cadastro 
    // (Em um sistema real, isso seria feito em outro momento)
    cout << "Qual foi o placar real do " << novaPartida.time1 << "? ";
    cin >> novaPartida.resultado1;
    cout << "Qual foi o placar real do " << novaPartida.time2 << "? ";
    cin >> novaPartida.resultado2;

    partidas.push_back(novaPartida);
    cout << "Partida \"" << novaPartida.time1 << " x " << novaPartida.time2 << "\" adicionada!\n";
}

void realizarApostas(vector<Apostador>& apostadores, const vector<Partida>& partidas) {
    if (apostadores.empty() || partidas.empty()) {
        cout << "Erro: É necessário ter pelo menos um apostador e uma partida cadastrados.\n";
        return;
    }

    int p1, p2;

    for (size_t i = 0; i < apostadores.size(); ++i) {
        cout << "\nApostas de: " << apostadores[i].nome << endl;
        
        // Zera os pontos para recalcular caso refaçam as apostas
        apostadores[i].pontos = 0; 

        for (size_t j = 0; j < partidas.size(); ++j) {
            cout << partidas[j].time1 << " x " << partidas[j].time2 << endl;
            cout << partidas[j].time1 << ": ";
            cin >> p1;
            cout << partidas[j].time2 << ": ";
            cin >> p2;
            
            apostadores[i].pontos += calcularPontos(p1, p2, partidas[j].resultado1, partidas[j].resultado2);
        }
        cout << "***************************" << endl;
    }
}

void visualizarRanking(vector<Apostador> apostadores) {
    if (apostadores.empty()) {
        cout << "Nenhum apostador cadastrado." << endl;
        return;
    }

    // Ordenação utilizando uma função lambda moderna
    sort(apostadores.begin(), apostadores.end(), [](const Apostador& a, const Apostador& b) {
        return a.pontos > b.pontos;
    });

    cout << "=== Ranking de Pontuação ===" << endl;
    for (size_t i = 0; i < apostadores.size(); ++i) {
        cout << (i + 1) << "º Lugar: " << apostadores[i].nome << " - " << apostadores[i].pontos << " pontos" << endl;
    }
    cout << "***************************" << endl;
}

int main() {
    #ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");
    #endif

    int opcao;
    vector<Apostador> apostadores;
    vector<Partida> partidas;

    do {
        cout << "\n=== Bem-vindo ao Sistema de Bolão ===" << endl;
        cout << "1. Cadastrar Apostador" << endl;
        cout << "2. Adicionar Partida" << endl;
        cout << "3. Realizar Apostas" << endl;
        cout << "4. Visualizar Ranking" << endl;
        cout << "5. Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cadastroApostador(apostadores);
                break;
            case 2:
                adicionarPartida(partidas);
                break;
            case 3:
                realizarApostas(apostadores, partidas);
                break;
            case 4:
                visualizarRanking(apostadores);
                break;
            case 5:
                cout << "Obrigado por participar do Bolão! Até logo!" << endl;
                break;
            default:
                cout << "Opção inválida. Por favor, tente novamente." << endl;
        }
    } while (opcao != 5);

    return 0;
}