#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Pessoa{
private:
    string nome;
    int idade;
    string number;

public:

    Pessoa(string nome){
        setNome(nome);
    }

    Pessoa(string nome, int idade, string number){
        setNome(nome);
        setIdade(idade);
        setNumber(number);
    }


    void setNome(string n){nome = n;}
    void setIdade(int i){idade = i;}
    void setNumber(string n){number = n;}

    string getNome(){return nome;}
    int getIdade(){return idade;}
    string getNumber(){return number;}
};

int main()
{
    vector <Pessoa*> Pessoas;
    Pessoa * pessoa;
    pessoa = new Pessoa("Ivan", 23, "123456789");
    Pessoas.push_back(pessoa);

    string name, numero;
    int age;

    cout << "Informe o nome: " <<endl;
    cin >> name;
    cout << "Informe a idade: " <<endl;
    cin >> age;
    cout << "Informe o Nº do telefone: " <<endl;
    cin >> numero;

    pessoa = new Pessoa(name, age, numero);
    Pessoas.push_back(pessoa);

    vector<Pessoa*>::iterator iter = Pessoas.begin();

    for(iter; iter != Pessoas.end(); iter++){
        cout << "Nome: " << (*iter)->getNome() <<endl;
        cout << "Idade: " << (*iter)->getIdade() <<endl;
        cout << "Nº do Telefone: " << (*iter)->getNumber() <<endl;
    }

}
