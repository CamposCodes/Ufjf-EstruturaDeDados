#ifndef ALUNO_H
#define ALUNO_H

#include <iostream>
#include <string>

using namespace std;

class Aluno
{
    public:
        Aluno(string n, string m);
        ~Aluno();

        // operacoes
        void setNome(string n);
        string getNome();

        // exercicio 1
        void leNotas();
        double calculaMedia();

        // exercicio 2
        void setMatricula();
        string getMatricula();
        void setIdade();
        int getIdade();
        void imprimeNotas();

        // exercicio 5
        void guardaFrequencia();
        //exercicio6
        void imprimeDados();


    private:
        int idade;
        string nome, matricula;
        double notas[7];

        // exercicio 3


        // exercicio 4
        bool freq[7];


};

#endif // ALUNO_H
