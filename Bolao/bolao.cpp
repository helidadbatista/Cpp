#include <iostream>
#include <string>

using namespace std;

int calcularPontos(int p1, int p2, int resultado1, int resultado2) {
    if (p1 == resultado1 && p2 == resultado2)
        return 4;
    else if ((p1 > p2 && resultado1 > resultado2) ||
             (p1 < p2 && resultado1 < resultado2))
        return 3;
    else if (p1 == p2 && resultado1 == resultado2)
        return 2;
    else
        return 0;
}

int main() {

    string apostador1, apostador2, apostador3;

    int pontos1 = 0, pontos2 = 0, pontos3 = 0;

    // Resultados 
    int brasil = 3, egito = 0;
    int russia = 1, marrocos = 1;
    int franca = 1, argentina = 2;
    int alemanha = 4, costaRica = 2;

    cout << "***************************" << endl;
    cout << "Bolão do Iteam - Turma Full Stack Vespertino" << endl;
    cout << "***************************" << endl;

    

    // ***********************************************************
    cout << "1º Apostador:" << endl;
    cout << "Digite seu nome: ";
    cin >> apostador1;

    int p1, p2;

    cout << "Apostas:" << apostador1 << endl;
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


    // ***********************************************************
    
    cout << "***************************" << endl;
    cout <<endl;
    cout << "2º Apostador:" << endl;
    cout << "Digite seu nome: ";
    cin >> apostador2;

    
    cout << "Apostas:" << apostador2 << endl;
    cout << "Brasil x Egito" << endl;
    cout<< "Brasil: " << endl;
    cin >> p1;
    cout<< "Egito: "<< endl;
    cin >> p2;


    pontos2 += calcularPontos(p1, p2, brasil, egito);



    // Russia x Marrocos
    cout << "Russia x Marrocos"<< endl;
    cout<< "Russia: " << endl;
    cin >> p1;
    cout<< "Marrocos: "<< endl;
    cin >> p2;

    pontos2 += calcularPontos(p1, p2, russia, marrocos);

    
    // França x Argentina
    cout << "Franca x Argentina"<< endl;
    cout<< "Franca: " << endl;
    cin >> p1;
    cout<< "Argentina: "<< endl;
    cin >> p2;

    pontos2 += calcularPontos(p1, p2, franca, argentina);




    // Alemanha x Costa Rica
    cout << "Alemanha x Costa Rica"<< endl;
    cout<< "Alemanha: " << endl;
    cin >> p1;
    cout<< "Costa Rica: "<< endl;
    cin >> p2;

    pontos2 += calcularPontos(p1, p2, alemanha, costaRica);






    // ***********************************************************
    cout << "***************************" << endl;
    cout <<endl;
    cout << "3º Apostador:" << endl;
    cout << "Digite seu nome: ";
    cin >> apostador3;

    
    cout << "Apostas:" << apostador3 << endl;
    cout << "Brasil x Egito" << endl;
    cout<< "Brasil: " << endl;
    cin >> p1;
    cout<< "Egito: "<< endl;
    cin >> p2;


    pontos3 += calcularPontos(p1, p2, brasil, egito);



    // Russia x Marrocos
    cout << "Russia x Marrocos"<< endl;
    cout<< "Russia: " << endl;
    cin >> p1;
    cout<< "Marrocos: "<< endl;
    cin >> p2;

    pontos3 += calcularPontos(p1, p2, russia, marrocos);

    
    // França x Argentina
    cout << "Franca x Argentina"<< endl;
    cout<< "Franca: " << endl;
    cin >> p1;
    cout<< "Argentina: "<< endl;
    cin >> p2;

    pontos3 += calcularPontos(p1, p2, franca, argentina);




    // Alemanha x Costa Rica
    cout << "Alemanha x Costa Rica"<< endl;
    cout<< "Alemanha: " << endl;
    cin >> p1;
    cout<< "Costa Rica: "<< endl;
    cin >> p2;

    pontos3 += calcularPontos(p1, p2, alemanha, costaRica);


    
    
    // ***********************************************************



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