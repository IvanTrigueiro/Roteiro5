#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Despesa{
private:
    double valor;
    string tipodegasto;
public:
    Despesa(double valor, string tipodegasto){
        setValor(valor);
        setTipoDeGasto(tipodegasto);
    }

    void setValor(double val){valor = val;}
    void setTipoDeGasto(string tipo){tipodegasto = tipo;}

    double getValor(){return valor;}
    string getTipoDeGasto(){return tipodegasto;}
    };

class ControleDeGastos{
private:
    vector <Despesa*> despesas;
    Despesa * despesa;
    double total;

public:
    ControleDeGastos(double v4lor){
        despesa->setValor(v4lor);
    }

    void setDespesas(double valor_new, string tipodegasto_new){
        despesa->setValor(valor_new);
        despesa->setTipoDeGasto(tipodegasto_new);
    }

    double TotalDespesas(){
        total = 0.0;
        total = total + despesa->getValor();
        return total;
    }
};

int main(){
    ControleDeGastos gastos();
    double cost;
    string type;

    cout << "Qual o valor do gasto? "<<endl;
    cin >> cost;
    cout << "Com o que voce gastou? "<<endl;
    cin >> type;

    gastos.setDespesas(cost, type)

    cout >> gastos.TotalDespesas() <<endl;
}
