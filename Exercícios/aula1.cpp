#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    cout<<"Hello World!"<<endl;



    int idade;

    cout<<"Digite a sua idade: ";
    cin>>idade; 

    cout<<"Você tem "<<idade<<" anos."<<endl;

    double pi = 3.14159;
    cout<<"O valor de pi é aproximadamente: "<<fixed << setprecision(2) <<pi<<endl;
    

    return 0;
}