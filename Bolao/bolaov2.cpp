/*Hélida DIas Batista Xerfan
Leonardo Tupinambá
Lorraine Isabele
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <clocale>
#ifdef _WIN32
#include <windows.h>
#endif

using namespace std;

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

void cadastroApostador() {
    string nome;
    cout << "Digite o nome do apostador: ";
    cin >> nome;
    cout << "Apostador \"" << nome << "\" cadastrado com sucesso!" << endl;
}

void adicionarPartida() {
    string partida;
    cout << "Digite o nome da partida a ser adicionada: ";
    cin >> partida;
    cout << "Partida \"" << partida << "\" adicionada com sucesso!" << endl;
}

void realizarApostas() {
    string Apostador;
    string partida;
    string aposta1;
    string aposta2;
    string aposta3;
    
    int pontos1 = 0;
    int pontos2 = 0;
    int pontos3 = 0;

    cout << "1º Apostador:" << endl;
    cout << "Digite seu nome: ";
    cin >> Apostador;
    
    // Resultados 
    int brasil = 3, egito = 0;
    int russia = 1, marrocos = 1;
    int franca = 1, argentina = 2;
    int alemanha = 4, costaRica = 2;
    
    int p1, p2;
    
    // Brasil x Egito
    cout << "Apostas:" << Apostador << endl;
    cout << "Brasil x Egito" << endl;
    cout<< "Brasil: " << endl;
    cin >> p1;
    cout<< "Egito: "<< endl;
    cin >> p2;
    
    pontos1 += calcularPontos(p1, p2, brasil, egito);
    
    
    // Russia x Marrocos
    cout << "Russia x Marrocos"<< endl;
    cout<< "Russia: " << endl;
    cin >> p1;
    cout<< "Marrocos: "<< endl;
    cin >> p2;
    
    pontos1 += calcularPontos(p1, p2, russia, marrocos);
    
    
    // França x Argentina
    cout << "Franca x Argentina"<< endl;
    cout<< "Franca: " << endl;
    cin >> p1;
    cout<< "Argentina: "<< endl;
    cin >> p2;
    
    pontos1 += calcularPontos(p1, p2, franca, argentina);
    
     
    // Alemanha x Costa Rica
    cout << "Alemanha x Costa Rica"<< endl;
    cout<< "Alemanha: " << endl;
    cin >> p1;
    cout<< "Costa Rica: "<< endl;
    cin >> p2;
    
    pontos1 += calcularPontos(p1, p2, alemanha, costaRica);

    cin >> aposta2;
    cout << "Aposta de \"" << aposta2 << "\" na partida \"" << partida
    << "\" registrada com sucesso!" << endl;
}

int main() {
    #ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");
    #endif

    int opcao;
    string entrada;

    do {
        cout << "=== Bem-vindo ao Sistema de Bolão ===" << endl;
        cout << endl;
        cout << "1. Cadastrar Apostador" << endl;
        cout << "2. Adicionar Partida" << endl;
        cout << "3. Realizar Apostas" << endl;
        cout << "4. Mostrar Ranking" <<endl;
        cout << "5. Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;
        cin.ignore(); // limpar buffer

        switch (opcao) {
            case 1: {
                cadastroApostador();
                break;
            }
            case 2: {
                adicionarPartida();
                break;
            }
            case 3: {
              realizarApostas();
                break;
            }
            case 4: {
                cout << "Obrigado por participar do Bolão!" << "! Até logo!" << endl;
                break;
            }
            default:
                cout << "Opção inválida. Por favor, tente novamente." << endl;
        }
        cout << endl; // Adiciona uma linha em branco para melhor legibilidade
    } while (opcao != 4);

        string apostador1, apostador2, apostador3;

        int pontos1 = 0, pontos2 = 0, pontos3 = 0;

    // Resultados 
    
/*
    
 //   cout << "***************************" << endl;
  //  cout <<endl;
  //  cout << "2º Apostador:" << endl;
  //  cout << "Digite seu nome: ";
  //  cin >> apostador2;

    
  //  cout << "Apostas:" << apostador2 << endl;
  //  cout << "Brasil x Egito" << endl;
  //  cout<< "Brasil: " << endl;
  //  cin >> p1;
  //  cout<< "Egito: "<< endl;
   // cin >> p2;


 //   pontos2 += calcularPontos(p1, p2, brasil, egito);



    // Russia x Marrocos
 //   cout << "Russia x Marrocos"<< endl;
 //   cout<< "Russia: " << endl;
 //   cin >> p1;
  //  cout<< "Marrocos: "<< endl;
  //  cin >> p2;

    // pontos2 += calcularPontos(p1, p2, russia, marrocos);

    
    // // França x Argentina
    // cout << "Franca x Argentina"<< endl;
    // cout<< "Franca: " << endl;
    // cin >> p1;
    // cout<< "Argentina: "<< endl;
    // cin >> p2;

    // pontos2 += calcularPontos(p1, p2, franca, argentina);




    // // Alemanha x Costa Rica
    // cout << "Alemanha x Costa Rica"<< endl;
    // cout<< "Alemanha: " << endl;
    // cin >> p1;
    // cout<< "Costa Rica: "<< endl;
    // cin >> p2;

    // pontos2 += calcularPontos(p1, p2, alemanha, costaRica);






    // // ***********************************************************
    // cout << "***************************" << endl;
    // cout <<endl;
    // cout << "3º Apostador:" << endl;
    // cout << "Digite seu nome: ";
    // cin >> apostador3;

    
    // cout << "Apostas:" << apostador3 << endl;
    // cout << "Brasil x Egito" << endl;
    // cout<< "Brasil: " << endl;
    // cin >> p1;
    // cout<< "Egito: "<< endl;
    // cin >> p2;


    // pontos3 += calcularPontos(p1, p2, brasil, egito);



    // // Russia x Marrocos
    // cout << "Russia x Marrocos"<< endl;
    // cout<< "Russia: " << endl;
    // cin >> p1;
    // cout<< "Marrocos: "<< endl;
    // cin >> p2;

    // pontos3 += calcularPontos(p1, p2, russia, marrocos);

    
    // // França x Argentina
    // cout << "Franca x Argentina"<< endl;
    // cout<< "Franca: " << endl;
    // cin >> p1;
    // cout<< "Argentina: "<< endl;
    // cin >> p2;

    // pontos3 += calcularPontos(p1, p2, franca, argentina);




    // // Alemanha x Costa Rica
    // cout << "Alemanha x Costa Rica"<< endl;
    // cout<< "Alemanha: " << endl;
    // cin >> p1;
    // cout<< "Costa Rica: "<< endl;
    // cin >> p2;

    // pontos3 += calcularPontos(p1, p2, alemanha, costaRica);

*/

    cout << "***************************" << endl;
    cout << "********RESULTADO********";
    cout << "***************************" << endl;
    cout <<endl;

    if (pontos1 >= pontos2 && pontos1 >= pontos3) {
        cout << "\n1º Lugar: " << apostador1 << ": " << pontos1 << " pontos\n";

        if (pontos2 >= pontos3) {
            cout << "2º Lugar: " << apostador2 << ": " << pontos2 << " pontos\n";
            cout << "3º Lugar: " << apostador3 << ": " << pontos3 << " pontos\n";
        } else {
            cout << "2º Lugar: " << apostador3 << ": " << pontos3 << " pontos\n";
            cout << "3º Lugar: " << apostador2 << ": " << pontos2 << " pontos\n";
        }
    }
    else if (pontos2 >= pontos1 && pontos2 >= pontos3) {
        cout << "\n1º Lugar: " << apostador2 << ": " << pontos2 << " pontos\n";

        if (pontos1 >= pontos3) {
            cout << "2º Lugar: " << apostador1 << ": " << pontos1 << " pontos\n";
            cout << "3º Lugar: " << apostador3 << ": " << pontos3 << " pontos\n";
        } else {
            cout << "2º Lugar: " << apostador3 << ": " << pontos3 << " pontos\n";
            cout << "3º Lugar: " << apostador1 << ": " << pontos1 << " pontos\n";
        }
    }
    else {
        cout << "\n1º Lugar: " << apostador3 << ": " << pontos3 << " pontos\n";

        if (pontos1 >= pontos2) {
            cout << "2º Lugar: " << apostador1 << ": " << pontos1 << " pontos\n";
            cout << "3º Lugar: " << apostador2 << ": " << pontos2 << " pontos\n";
        } else {
            cout << "2º Lugar: " << apostador2 << ": " << pontos2 << " pontos\n";
            cout << "3º Lugar: " << apostador1 << ": " << pontos1 << " pontos\n";
        }
    }

    return 0;
}