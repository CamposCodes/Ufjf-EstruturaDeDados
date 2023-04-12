#include "Aluno.h"

Aluno::Aluno(string n, string m)
{
    cout << "Criando aluno" << endl;
    nome = n;
    matricula = m;
}

Aluno::~Aluno()
{
    cout << "Destruindo objeto aluno" << endl;
}

// ----------------------------------------------------------------------------
// Exercicio 1
// ----------------------------------------------------------------------------

void Aluno::leNotas()
{
    for(int i = 0; i < 7; i++){
        cout<<"Digite a nota "<<i<<" = ";
        cin>>notas[i];
    }
}

double Aluno::calculaMedia()
{
    double soma = 0;
    for(int i = 0; i < 7; i++){
        soma += notas[i];
    }
    return (soma / 7);
}

// ----------------------------------------------------------------------------

void Aluno::setNome(string novo)
{
    nome = novo;
}

string Aluno::getNome()
{
    return nome;
}

// ----------------------------------------------------------------------------
// Exercicio 2
// ----------------------------------------------------------------------------

int Aluno::getIdade(){
    return idade;

}
void Aluno::setIdade(){
    cout<<"Digite a idade do aluno: ";
    cin>>idade;
}

string Aluno::getMatricula(){
    return matricula;
}
void Aluno::setMatricula(){
    cout<<"Digite a matricula do aluno: ";
    cin>>matricula;
}



// ----------------------------------------------------------------------------
// Exercicio 3
void Aluno::imprimeNotas(){
    cout<<endl<<"Notas do Aluno A..."<<endl;
    for(int i =0;i<7;i++){
        cout<<"Nota "<<i<<" = "<<notas[i]<<endl;
    }
}
// ----------------------------------------------------------------------------

void Aluno::guardaFrequencia(){
    cout<<endl<<"Digite a frequencia do Aluno A (1 -> para P // 0 -> para F) : "<<endl;
    for(int i =0;i<7;i++){
        cout<<"Aula "<<i<<"(P -> 1 / F -> 0) = ";
        cin>>freq[i];
    }

}

void Aluno::imprimeDados(){
    cout<<endl<<"---------------------------"<<endl;
    cout<<"Imprimindo dados do Aluno A"<<endl;
    cout<<"---------------------------"<<endl;
    cout<<"Nome : "<<getNome()<<endl;
    cout<<"Idade : "<<getIdade()<<endl;
    cout<<"Matricula : "<<getMatricula()<<endl;
    imprimeNotas();
    cout << "Media do aluno: " << calculaMedia() << endl;
    cout<<"---------------------------"<<endl;
    cout<<"Frequencia e Aprovação do Aluno A"<<endl;
    cout<<"---------------------------"<<endl;

    for(int i = 0;i<7;i++){
        if(freq[i] == 1 && notas[i] >= 60){
            cout<<"Materia "<<i<<" = Presente => Aprovado"<<endl;
        }
        else if(freq[i] == 1 && notas[i] < 60){
            cout<<"Materia "<<i<<" = Presente => Reprovado"<<endl;
        }
        else if(freq[i] == 0 && notas[i] >= 60){
            cout<<"Materia "<<i<<" = Ausente => Aprovado"<<endl;
        }
        else{
            cout<<"Materia "<<i<<" = Ausente => Reprovado"<<endl;
        }
    }

}

