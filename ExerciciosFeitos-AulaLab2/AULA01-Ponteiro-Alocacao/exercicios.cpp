#include <iostream>

using namespace std;

void troca(int *a, int *b){
    int aux;
    aux = *b;
    *b = *a;
    *a = aux;
}

void divisao(int num, int div, int *q, int *r){
    *q = num/div;
    *r = num%div;
}

bool func(int tam, int vet[], int *par,int *impar, int *negativos){
    for(int i =0;i<tam;i++){
        if(vet[i] % 2 == 0){
            *par = *par + 1;
        }
        else{
            *impar = *impar + 1;
        }

        if(vet[i] < 0){
            *negativos = *negativos + 1;
        }
    }
    if(*negativos > 0){
        return true;
    }
    else{
        return false;
    }
}

float ex5(){
    int soma = 0;
    int n = 0;
    cout<<endl<<"Digite o tamanho do vetor desejado: ";
    cin>>n;
    int * vet = new int [n];
    cout<<endl<<"Digite os valores para preencher o vetor..."<<endl;
    for(int i = 0;i<n;i++){
        cout<<"vet["<<i<<"] = ";
        cin>>vet[i];
        soma += vet[i];
    }
    float media = soma/n;
    return media;
}

float prodEscalar(int n, float x[], float y[]){
    float prodEsc = 0;
    cout<<endl<<"Digite os valores para preencher o vetor..."<<endl;
    for(int i = 0;i<n;i++){
        cout<<endl<<"vet1["<<i<<"] = ";
        cin>>x[i];
        cout<<endl<<"vet2["<<i<<"] = ";
        cin>>y[i];
    }
    for(int i =0;i<n;i++){
        prodEsc += x[i]*y[i];
    }
    return prodEsc;
}

int main()
{
    cout<<"==> Exercicio 1 - ponteiros"<<endl<<endl;
    int * pt;
    cout<<"Endereco de pt : "<<pt<<endl;
    int x;
    cout<<"Digite um valor para x : ";
    cin>>x;
    cout<<endl;
    pt = &x;
    cout<<"Conteudo de pt : "<<*pt<<endl;
    cout<<"Endereco de pt : "<<pt<<endl;

    //multiplica valor de x por 10 atraves de ponteiro
    *pt = *pt * 10;
    //ou (*pt)*10;

    cout<<"Conteudo de pt : "<<*pt<<endl;
    cout<<"Endereco de pt : "<<pt<<endl;

    // somando 10 ao endereço de pt
    pt = pt + 10;
    // ou pt += 10;
    //==> nesse caso o endereço de memoria muda e seu conteudo tambem, consequentimente.
    cout<<"Conteudo de pt : "<<*pt<<endl;
    cout<<"Endereco de pt : "<<pt<<endl;

    //Some 10 à variavel pt e Imprima o seu conteudo novamente.
    //Qual o significado desta saída?

    cout<<endl<<"==> Exercicio 2 - ponteiros"<<endl;
    int x1 = 10;
    int x2 = 20;
    int* a = &x1;
    int* b = &x2;
    cout<<endl<<"Valor de a = "<<*a<<endl;
    cout<<"Valor de b = "<<*b<<endl<<endl;
    troca(a,b);
    cout<<endl<<"Valor de a = "<<*a<<endl;
    cout<<"Valor de b = "<<*b<<endl<<endl;

    cout<<"==> Exercicio 3 - ponteiros"<<endl;
    int num = 10;
    int div = 2;
    int quo =0;
    int res = 0;
    int *q = &quo;
    int *r = &res;
    divisao(num,div,q,r);
    cout<<endl<<"quociente = "<<*q<<endl;
    cout<<"resto = "<<*r<<endl;

    cout<<endl<<"==> Exercicio 4 - ponteiros"<<endl;

    int tam = 10;
    int vet[tam]= {-1,-2,3,4,5,6,7,8,9,10};

    int par = 0;
    int impar = 0;
    int neg = 0;

    bool resp = func(tam,vet,&par,&impar,&neg);

    cout<<endl<<"Numero de elementos pares : "<<par<<endl;
    cout<<"Numero de elementos impares : "<<impar<<endl;
    cout<<"Existem numeros negativos nesse vetor? ";
    if(resp == 1){
        cout<<"R: Sim"<<endl;
    }
    else{
        cout<<"R: Nao"<<endl;
    }
    cout<<"Numero de elementos negativos : "<<neg<<endl;

    cout<<endl<<"==> Exercicio 5 - alocacao dinamica"<<endl;
    cout<<"A media do vetor eh: "<<ex5()<<endl;

    cout<<endl<<"==> Exercicio 6 - alocacao dinamica"<<endl;
    int n = 0;
    cout<<endl<<"Digite o tamanho desejado para os dois vetores: ";
    cin>>n;
    float * vet1 = new float [n];
    float * vet2 = new float [n];


    cout<<endl<<"O produto escalar de vet1 e vet2 eh: "<<prodEscalar(n,vet1,vet2)<<endl;

    cout<<endl<<"Desalocando vet1 e vet2..."<<endl;
    delete [] vet1;
    delete [] vet2;


    return 0;
}
