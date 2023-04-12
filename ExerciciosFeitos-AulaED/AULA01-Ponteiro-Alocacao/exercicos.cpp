#include <iostream>

using namespace std;

void func1( ) {
    int mat[ ] = {1, 10, 100};
    cout << "Percorre o vetor atraves de aritimetica ponteiro"<<endl;
    for(int j=0; j<3; j++){
        cout << *(mat+j) <<endl;
    }
}

void func2( ){
    int mat[ ] = {1, 10, 100};
    cout << endl <<"Percorre o vetor atraves de aritimetica ponteiro, imprimindo endereço de cada posicao"<<endl;
    for(int j=0; j<3; j++){
        cout << (mat+j) << endl;
    }
}

void func3( ) {
    int mat[ ] = {1, 10, 100}; int *p=mat;
    cout<<endl<<"ponteiro aponta para 1 posicao do vetor e vai sendo incrementado (+1)"<<endl;
    for(int j=0; j<3; j++){
       cout << (*p)++ << endl;
    }
}

void funcEx3(int *vet,int tam){
    int contPar = 0;
    int contImpar = 0;
    int contNeg = 0;

    for(int i = 0;i<tam;i++){
        if(vet[i] < 0){
            contNeg++;
        }
        if(vet[i] % 2 == 0){
            contPar ++;
        }
        else{
            contImpar++;
        }
    }
    cout <<"A quantidade de elementos pares no vetor eh: "<< contPar <<endl;
    cout <<"A quantidade de elementos impares no vetor eh: "<< contImpar <<endl;
    cout <<"A quantidade de elementos negativos no vetor eh: "<< contNeg<<endl<<endl;
}

void funcEx4(){
    int n;
    int soma = 0;
    cout<<"Digite um numero de elementos N:";
    cin>>n;

    int * vet = new int[n];

    cout<<"Preenchendo vetor..."<<endl;
    for(int i = 0;i < n;i++){
        cout<<"Digite um valor para vet["<<i<<"] = ";
        cin>>vet[i];
        soma += vet[i];
    }

    float media = soma / n;
    cout<<endl<<"A media dos valores do vetor eh:"<<media<<endl;
    cout<<endl<<"Deletando vetor..."<<endl<<endl;
    delete [] vet;

}

float funcEx5(float vet[],int n){
    int soma = 0;
    float media = 0;
    for(int i = 0;i < n;i++){
        soma += vet[i];
    }
    media = soma / n;
    return media;
}

float* funcEx6(int n){
    float * vet = new float[n];
    return vet;
}

void imprimeVet(float *vet, int n){
    cout<<"Imprimindo vetor..."<<endl;
    for(int i = 0;i < n;i++){
        cout<<endl<<"vet["<<i<<"] = "<<vet[i]<<endl;
    }
}

int main()
{
    cout<<"==> Exercicio 6 - alocacao dinamica"<<endl<<endl;
    float* vet3 = funcEx6(10);
    imprimeVet(vet3,10);


    int tam = 10;
    int vet1[tam] = {1,1,1,1,1,1,1,1,1,1};
    float vet2[tam] = {2,2,2,2,2,2,2,2,2,2};

    cout<<endl<<"==> Exercicio 5 - alocacao dinamica"<<endl<<endl;
    float media = funcEx5(vet2,tam);
    cout<<"A media dos elementos do vetor eh:" << media << endl;


    cout<<endl<<"==> Exercicio 4 - alocacao dinamica"<<endl<<endl;
    funcEx4();
    cout<<endl<<"==> Exercicio 3 - ponteiros"<<endl;
    funcEx3(vet1,tam);

    cout<<endl<<"==> Exercicio 2 - ponteiros"<<endl;
    func1();
    func2();
    func3();



    return 0;
}
