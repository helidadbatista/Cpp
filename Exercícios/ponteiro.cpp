#include<iostream>
using namespace std;

int main () {

    int * pi = new int;
    *pi = 1001;

    cout << "Valor Inteiro: " << *pi << endl;
    cout << "Localização" << pi << endl;


    double * pd = new double;
    *pd = 500.35;
    cout << "Valor ponto flutuante: " << *pd << endl;
    cout << "Localização" << pd << endl;

    cout << "Tamanho do PI: " << sizeof(pi) << endl;
    cout << "Tamanho do *PI: " << sizeof(*pi) << endl;
    cout << "Tamanho do PD: " << sizeof(pd) << endl;
    cout << "Tamanho do *PD: " << sizeof(*pd) << endl;

}