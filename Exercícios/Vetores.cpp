#include<iostream>
#include<vector>
#include <windows.h>
using namespace std;

int main () {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    vector<int> valores;

    valores.push_back(10);
    valores.push_back(20);
    valores.push_back(30);


    cout <<"Primeiro: " << valores[0] << endl;
    cout <<"Tamanho: " << valores.size() << endl;

    for (vector<int>::size_type i = 0; i < valores.size(); i++) {
        cout << "Valor: " << valores[i] << endl;
    }

    cout<<endl;

    valores.pop_back();

    cout << "Após remover: ";

    for (int x:valores){
        cout <<x<<" ";
    }

    cout <<endl;

    return 0;

}
