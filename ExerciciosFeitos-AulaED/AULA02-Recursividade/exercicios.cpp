#include <iostream>

using namespace std;


int ex1(int n){
    if(n == 0){
        return 0;
    }
    else{
        return n + ex1(n-1); //recursividade no retorno
    }
}

float ex2(int tam, float vet[]){
    if(tam == 1){
        return vet[tam-1];
    }

    float menor = ex2(tam-1, vet); //recursividade na variavel

    if(menor < vet[tam-1]){
        return menor;
    }
    else{
        return vet[tam-1];
    }
}

float soma(float vet[], int tam){
    if(tam == 0){
        return 0;
    }
    else{
        return vet[tam - 1] + soma(vet, tam - 1);
    }
}

int contaPares(int tam, int vet[]){
    if(tam == 1){
        if(vet[0] % 2 == 0){
            return 1;
        }
    }
    float x = contaPares(tam-1,vet);

    if((vet[tam-1] % 2) == 0){
        return x + 1;
    }
    else{
        return x;
    }
}



void binario(int n,int i,char bi[]){

    if(n == 0){
        bi[i] = '0';
    }
    else{
        bi[i-1] = n % 2;
        binario(n/2,i-1,bi);
    }
}




int main()
{
    cout<<"==> exercicio 1 - recursividade"<<endl<<endl;
    cout<<"O somatorio de N eh: "<<ex1(2)<<endl<<endl;

    int tam = 5;
    float vet1[tam] = {-1,1,1,1,2};
    int vet[tam] = {1,1,2,1,2};

    cout<<"==> exercicio 2 - recursividade"<<endl<<endl;
    cout<<"O menor valor do vetor eh: "<<ex2(tam, vet1)<<endl<<endl;


    cout<<"==> exercicio 3 - recursividade"<<endl<<endl;
    cout<<"O somatorio dos valores do vetor eh: "<<soma(vet1,tam)<<endl<<endl;

/*
    cout<<"==> exercicio 4 - recursividade"<<endl<<endl;
    int pares = contaPares(tam,vet);
    cout<<"A quantidade de numeros pares no vetor eh: "<<pares<<endl;
*/
    cout<<"==> exercicio 5 - recursividade !NAO CONSEGUI!"<<endl<<endl;

    /*Desenvolver uma função recursiva para calcular e retornar
    uma string de caracteres contendo ‘0’ e ‘1’ correspondente
    à versão binária de um número inteiro positivo dado.*/

    char *bi = new char[20];
    int n = 10;
    int i = n;
    binario(n,i,bi);
    int x = 0;
    while(bi[x] != '\0'){
        cout<<bi[x];
        x++;
    }


    return 0;
}
