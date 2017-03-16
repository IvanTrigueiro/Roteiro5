#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Empregado{
private:
    string nome;
    string sobrenome;
    float salario;

public:

    Empregado(string nome, string sobrenome, float salario){
        setNome(nome);
        setSobrenome(sobrenome);
        if(salario < 0){
            setSalario(0);
        }
        else
            setSalario(salario);
    }

    void setNome(string n){nome = n;}

    void setSobrenome(string s){
        sobrenome = s;
    }
    void setSalario(float sal){
        salario = sal;
    }

    string getNome(){return nome;}
    string getSobrenome(){return sobrenome;}
    float getSalario(){return salario;}
};

int main(){
    Empregado empregado("Ivan", "Trigueiro", 100000);

    vector <Empregado*> empregados;
    Empregado * empregad;
    empregad = new Empregado("Nie", "Li", 200000);
    empregados.push_back(empregad);
    empregad = new Empregado("Maria","Lourdes", 50000);
    empregados.push_back(empregad);

    vector<Empregado*>::iterator iter = empregados.begin();

    for(iter; iter != empregados.end(); iter++){
        cout << "Nome: " << (*iter)->getNome() <<endl;
        cout << "Sobrenome: " << (*iter)->getSobrenome() <<endl;
        cout << "Salario anual: " << (*iter)->getSalario() <<endl;
        cout << "Salario anual +10%:  " <<(*iter)->getSalario()*1.1 <<endl;
    }
}
