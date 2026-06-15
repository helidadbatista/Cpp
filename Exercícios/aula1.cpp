#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout<<"Hello World!"<<endl;



    int idade;

    cout<<"Digite a sua idade: ";
    cin>>idade; 

    cout<<"Você tem "<<idade<<" anos."<<endl;

    double pi = 3.14159;
    cout<<"O valor de pi é aproximadamente: "<<fixed << setprecision(2) <<pi<<endl;
    

    return 0;
}