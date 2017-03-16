#include <iostream>

using namespace std;

class Data{
private:
    int dia, mes, ano;

public:
    Data(int dia, int mes, int ano)
        {
            // implementado para todos os meses com seus valores reias
            /*if ((mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) &&
               (dia >= 1 && dia <= 31) || (mes == 4 || mes == 6 || mes == 9 || mes == 11) && (dia >= 1 && dia <= 30))
                this.dia = dia;
            else if ((mes == 2 && dia >= 1 && dia <= 28)||(month == 2 && ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0) && (dia >= 1 && dia <= 29))
                this.dia = dia;
            else
                this.dia = 1;

            if (mes >= 1 && mes <= 12)
                this.mes = mes;
            else
                this.mes = 1;

            if (ano >= 1)
                this.ano = ano;
            else
                this.ano = 1;*/

            // implementado somente para meses com 31 dias
            if(dia >= 1 && dia <= 31){
                cout << dia;
                cout << " - Dia valido" <<endl;
            } else {
                cout << dia;
                cout << " - Dia invalido" <<endl;
                }

            if(mes >= 1 && mes <= 12){
                cout << mes;
                cout << " - Mes valido" <<endl;
            } else {
                cout << mes;
                cout << " - Mes invalido" <<endl;
                }

            if(ano > 0){
                cout << ano;
                cout << " - Ano valido" <<endl;
            } else {
                cout << ano;
                cout << " - Ano invalido" <<endl;
            }
        }

    void setDia(int d){dia = d;};
    void setMes(int m){mes = m;};
    void setAno(int a){ano = a;};

    int getDia(){return dia;}
    int getMes(){return mes;}
    int getAno(){return ano;}

    void avancarDia(){
        if(getDia() >= 1 && getDia() < 31){
            setDia(getDia() + 1);
        } else {
            setMes(getMes() + 1);
            setDia(1);
        }
        if(getMes() > 12){
            setAno(getAno() + 1);
        }
    }
};


int main()
{
    Data date(14, 10, 1993);

    date.setDia(31);
    date.setMes(10);
    date.setAno(1990);


    cout << "Dia: " << date.getDia() <<endl;
    cout << "Mes: " << date.getMes() <<endl;
    cout << "Ano: " << date.getAno() <<endl;

    date.avancarDia();

    cout << "Dia: " << date.getDia() <<endl;
    cout << "Mes: " << date.getMes() <<endl;
    cout << "Ano: " << date.getAno() <<endl;

}

