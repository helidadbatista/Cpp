/*Aula 17/06/2026
Professora: Erika Dilly
Aluna: Hélida Dias Batista Xerfan
*/

#include <iostream>
#include <string>

using namespace std;

class Produto {
protected:
    string nome;
    float preco;

public:
    Produto(string n, float p) {
        nome = n;
        preco = p;
    }

    void mostrarProduto() {
        cout << "Nome: " << nome << endl;
        cout << "Preco: R$ " << preco << endl;
    }
};

class Livro : public Produto {
private:
    string autor;

public:
    Livro(string n, float p, string a)
        : Produto(n, p) {
        autor = a;
    }

    void mostrarLivro() {
        mostrarProduto();
        cout << "Autor: " << autor << endl;
    }
};

class Eletronico : public Produto {
private:
    string marca;

public:
    Eletronico(string n, float p, string m)
        : Produto(n, p) {
        marca = m;
    }

    void mostrarEletronico() {
        mostrarProduto();
        cout << "Marca: " << marca << endl;
    }
};

int main() {

    Livro l1("Era uma vez", 39.90, "Fulano de tal");
    Livro l2("O Pequeno Principe", 29.90, "Antoine");

    Eletronico e1("Macbook", 15500.00, "Apple");
    Eletronico e2("Celular", 2200.00, "Samsung");

    cout << "Livro 1" << endl;
    l1.mostrarLivro();

    cout << "Livro 2" << endl;
    l2.mostrarLivro();

    cout << "Eletrônico 1" << endl;
    e1.mostrarEletronico();

    cout << "Eletrônico 2" << endl;
    e2.mostrarEletronico();

    return 0;
}