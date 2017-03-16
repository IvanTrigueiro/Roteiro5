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
    double total;

public:
    ControleDeGastos(Despesa* despesa){
        despesas.push_back(despesa);
    }

    void setDespesas(Despesa* despesa){
        despesas.push_back(despesa);
    }

    double TotalDespesas(){
        double total = 0.0;
        vector <Despesa*>::iterator iter = despesas.begin();
        for(iter; iter != despesas.end(); iter++){
        total = total + (*iter)->getValor();
        }
        return total;
    }
};

int main(){
    double cost;
    string type;

    //for(int i=0; i < 2; i++){}
    cout << "Qual o valor do gasto? "<<endl;
    cin >> cost;
    cout << "Com o que voce gastou? "<<endl;
    cin >> type;

    Despesa* gasto = new Despesa(cost, type);
    ControleDeGastos gastos(gasto);


    cout << gastos.TotalDespesas() <<endl;
    delete gasto;
}
