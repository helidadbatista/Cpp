#include <iostream>
using namespace std;


void trocar (int*a, int*b) {
    
    *a = *a + *b; // a = a + b
    *b = *a - *b; // b = a - b
    *a = *a - *b; // a = a - b
    
    return;
}

int main () {
    int a = 30, b = 20;

    cout << "Antes da troca: " << endl;
    cout << "a: " << a << endl;
    cout << "*a: " << &a << endl;

    cout << "b: " << b << endl;
    cout << "*b: " << &b << endl;

    trocar(&a, &b);

    cout << "Depois da troca: " << endl;
    cout << "a: " << a << endl;
    cout << "*a: " << &a << endl;

    cout << "b: " << b << endl;
    cout << "*b: " << &b << endl;

    return 0;

} 