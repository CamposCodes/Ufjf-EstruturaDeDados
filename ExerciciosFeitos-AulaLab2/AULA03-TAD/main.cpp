#include <iostream>
#include "Aluno.h"
#include "Prova.h"

using namespace std;

int main()
{
    cout << "LABORATORIO DE PROGRAMACAO II - AULA 04\n" << endl;

    // ------------------------------------------------------------------------
    // EXERCICIO 1
    // ------------------------------------------------------------------------
    Aluno a("Carlos", "201566123AB");

    // leitura das notas do aluno
    a.leNotas();
    double m = a.calculaMedia();

    cout << "Media do aluno: " << m << endl;

    a.setMatricula();
    a.setIdade();


    // ------------------------------------------------------------------------
    // EXERCICIO 3
    // ------------------------------------------------------------------------

    cout<<endl<<"---------------------------"<<endl;
    cout<<"Imprimindo dados do Aluno A"<<endl;
    cout<<"---------------------------"<<endl;
    cout<<"Nome : "<<a.getNome()<<endl;
    cout<<"Idade : "<<a.getIdade()<<endl;
    cout<<"Matricula : "<<a.getMatricula()<<endl;
    a.imprimeNotas();
    cout << "Media do aluno: " << m << endl;
    cout<<"---------------------------"<<endl;

    // ------------------------------------------------------------------------
    // EXERCICIO 5
    // ------------------------------------------------------------------------

    a.guardaFrequencia();


    // ------------------------------------------------------------------------
    // EXERCICIO 6
    // ------------------------------------------------------------------------

    a.imprimeDados();

    // ------------------------------------------------------------------------
    // EXERCICIO 7
    // ------------------------------------------------------------------------

    //Prova p(3);


    return 0;
}
