#include <iostream>
#include <string.h>

using namespace std;

class Invoice{
private:
    int numero;
    char descricao;
    int quantidade;
    float preco;
public:

    Invoice(int numero, const string& descricao, int quantidade, float preco)
    {
        cout << "Codigo do produto ->" << numero <<endl;
        cout << "Descricao: " << descricao <<endl;
        cout << "Quantidade comprada -> " << quantidade <<endl;
        cout << "Preco do produto -> " << preco <<endl;
    }

    void setNumero(int n){numero = n;};
    void setDesc(char d){descricao = d;};
    void setQtde(int q){quantidade = q;};
    void setPreco(float p){preco = p;}

    int getNumero(){return numero;};
    char getDesc(){return descricao;};
    int getQtde(){return quantidade;};
    float getPreco(){return preco;};

    float getInvoiceAmount()
    {
        float fatura;
        if( getQtde() <= 0){
            setQtde(0);
        }
        if(getPreco() <= 0){
            setPreco(0.0);
        }

        return getQtde()*getPreco();
    }


};


int main()
{
    Invoice invoice(5415, "Agua", 3, 2.50);
    int qtde, cod;
    float price;

    cout << "Digite o codigo do produto: " <<endl;
    cin >> cod;
    invoice.setNumero(cod);

    cout << "Digite a quantidade do produto: " <<endl;
    cin >> qtde;
    invoice.setQtde(qtde);

    cout << "Digite o preco do produto: " <<endl;
    cin >> price;
    invoice.setPreco(price);

    cout << "A fatura foi de: " << invoice.getInvoiceAmount() << " reais" <<endl;
}

