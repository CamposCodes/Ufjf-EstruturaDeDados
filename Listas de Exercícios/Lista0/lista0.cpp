#include <iostream>
#include <iomanip> // necessário para usar setprecision e setiosflags

using namespace std;

void printOptions(){
    cout<<endl<<"=============== CADASTRO DE ALUNOS =================="<<endl;
    cout<<endl<<"[1] Incluir aluno"<<endl<<"[2] Excluir aluno"<<endl<<"[3] Alterar aluno"<<endl<<"[4] Sair"<<endl;
    cout<<endl<<"====================================================="<<endl;
}

void menuSwitch(){
    int option = 0;
    cout<<endl<<"=============== CADASTRO DE ALUNOS =================="<<endl;
    cout<<endl<<"[1] Incluir aluno"<<endl<<"[2] Excluir aluno"<<endl<<"[3] Alterar aluno"<<endl<<"[4] Sair"<<endl;
    cout<<endl<<"====================================================="<<endl;
    cout<<endl<<"Digite o comando que deseja: ";
    cin>>option;

    if(option >= 1 || option<=4 ){
        switch(option){
        case 1:
            cout<<endl<<"[1] Incluir aluno"<<endl;
            break;
        case 2:
            cout<<endl<<"[2] Excluir aluno"<<endl;
            break;
        case 3:
            cout<<endl<<"[3] Alterar aluno"<<endl;
            break;
        case 4:
            cout<<endl<<"[4] Sair"<<endl;
            break;
        default:
            cout<<endl<<"Comando invalido"<<endl;
        }
    }
    else{
        cout<<endl<<"Comando invalido - Digite novamente o comando desejado :";
        cin>>option;
    }
}

void printNumberDecimalPlaces(double number, int numPlaces){
    cout<<"O numero com "<<numPlaces<<" casas decimais eh: "<<setiosflags(ios::fixed) << setprecision(numPlaces) << number << endl;
}

float ValorContaEnergia(){

    float numQuilowatts = 0;
    cout<<endl<<"Digite o numero de quilowatts consumido: ";
    cin>>numQuilowatts;


    float valorPorQuilowatt = 0.12;
    float valorParcial = (numQuilowatts * valorPorQuilowatt);
    float valorTotal = ( valorParcial * 0.18) + valorParcial;

    return valorTotal;
}

void pesquisaPrefeitura(){

    int cidadaos = 0;
    int filhosAtual = 0;
    int salariosAteCem = 0;

    float salarioAtual = 0;
    float somaSalarios = 0;
    float mediaSalarios = 0;
    float maiorSalario = 0;
    float somaFilhos = 0;
    float mediaFilhos = 0;
    float percentual = 0;



    cout<<endl<<"=============== PESQUISA PREFEITURA =================="<<endl;
    while(salarioAtual >= 0 ){
        cidadaos ++;
        cout<<endl<<"Digite o salario: ";
        cin>>salarioAtual;
        somaSalarios = somaSalarios + salarioAtual;

        cout<<endl<<"Digite o numero de filhos: ";
        cin>>filhosAtual;
        somaFilhos = somaFilhos + filhosAtual;

        if(salarioAtual > maiorSalario){
            maiorSalario = salarioAtual;
        }
        if(salarioAtual <= 100){
            salariosAteCem ++;
        }
    }

    mediaSalarios = somaSalarios / cidadaos;
    mediaFilhos = somaFilhos / cidadaos;

    percentual = (salariosAteCem / cidadaos);

    cout<<endl<<"=============== PESQUISA PREFEITURA =================="<<endl;
    cout<<"Media salarial: "<<mediaSalarios<<endl;
    cout<<"Media de filhos: "<<mediaFilhos<<endl;
    cout<<"Maior salario: "<<maiorSalario<<endl;
    cout<<"Percentual de pessoas com salario ate R$100: "<<percentual<<"%"<<endl;
    cout<<endl<<"====================================================="<<endl;

}

void estacaoDoAno(){

    int dia, mes;

    cout<<"Digite um dia e um mes do ano e descubra a qual estacao do ano ela pertence: "<<endl;
    cout<<"Digite um dia:";
    cin>>dia;
    cout<<"Digite um mes: ";
    cin>>mes;

    if(mes>0 && mes<=12 && dia>0 && dia<31){
        if(mes == 1){
            cout<<"Verao"<<endl;
        }
        else if(mes == 2){
             cout<<"Verao"<<endl;
        }
        else if(mes ==3){
            if(dia < 20){
                cout<<"Verao"<<endl;
            }
            else{
                cout<<"Outono"<<endl;
            }
        }
        else if(mes==4){
            cout<<"Outono"<<endl;
        }
        else if(mes==5){
            cout<<"Outono"<<endl;
        }
        else if(mes==6){
            if(dia < 20){
                cout<<"Outono"<<endl;
            }
            else{
                cout<<"Inverno"<<endl;
            }
        }
        else if(mes==7){
            cout<<"Inverno"<<endl;
        }
        else if(mes==8){
            cout<<"Inverno"<<endl;
        }
        else if(mes==9){
            if(dia < 22){
                cout<<"Inverno"<<endl;
            }
            else{
                cout<<"Primavera"<<endl;
            }
        }
        else if(mes==10){
            cout<<"Primavera"<<endl;
        }
        else if(mes==11){
            cout<<"Primavera"<<endl;;
        }
        else{
            if(dia < 21){
                cout<<"Primavera"<<endl;
            }
            else{
                cout<<"Verao"<<endl;
            }
        }
    }
    else{
        cout<<"Data digitada invalida !"<<endl;
    }
}


int fatorial(int n)
{
    int ret = 1;
    while (n > 1)
        ret *= n--;
    return ret;
}

float somatorioFatorial(int n){
    float somatorio = 0;
    for(int i = 0; i <= n;i++){
        somatorio = somatorio + (n-i)/fatorial(i+1);
    }
    return somatorio;
}

bool ehDivisivelPor3e5(int num){
    if(num % 3 == 0 && num % 5 == 0){
        return true;
    }
    else{
        return false;
    }
}

void imprimeTabelaMedia(){
    int numeros[20];
    int soma = 0;
    int media = 0;

    cout<<endl<<"Vamos preencher a tabela de medias: "<<endl;
    for(int i = 0; i < 20; i++){
        cout<<"Digite um numero["<<i<<"]: ";
        cin>>numeros[i];
        soma = soma + numeros[i];
    }
    media = soma / 20;
    cout<<endl<<" Valor | Media"<<endl<<"__________________"<<endl;
    for(int i = 0; i < 20; i ++){
        cout<<" "<<numeros[i]<<"\t--\t"<<media<<endl;
    }
}

void imprimeVetor(int vet[], int tam){
    cout<<endl<<"Imprimindo vetor..."<<endl<<endl;
    for(int i=0;i<tam;i++){
        cout<<"\t Vetor["<<i<<"] = "<<vet[i]<<endl;
    }
}

int maiorElemento(int vet[], int tam){
    int maior = 0;
    for(int i=0;i<tam;i++){
        if(maior < vet[i]){
            maior = vet[i];
        }
    }
    return maior;
}

void insereValorIndice(int vet[],int tam,int k,int val){
    for(int i=0;i<tam;i++){
        if(i == k){
            vet[i] = val;
        }
    }
}

bool existeNoVetor(int vet[],int tam,int busc){
    for(int i=0;i<tam;i++){
        if(vet[i] == busc){
            return true;
        }
        else{
            return false;
        }
    }
}

float mediaDoVetor(int vet[],int tam){
    int soma = 0;
    for(int i=0;i<tam;i++){
        soma = soma + vet[i];
    }
    float media = soma/tam;
    return media;
}

void removeValorIndice(int vet[], int tam, int k){
    for(int i=0;i<tam;i++){
        if(i == k){
            vet[i] = NULL;
        }
    }
}

void inicializaMatrizIdentidade(int mat[][4], int lin, int col, int val){
    for(int i = 0; i < lin;i++){
        for(int j = 0; j < col; j++){
            if (i == j){
                mat[j][i] = val;
            }
        }
    }
}

void imprimeMatriz(int mat[][4], int lin, int col){
    cout<<endl;
    for(int i = 0; i < lin;i++){
        for(int j = 0; j < col; j++){
            cout<<mat[i][j];
        }
        cout<<endl;
    }
}

int somaMatrizes(int mat1[][4], int mat2[][4], int matR[][4], int lin, int col){
    for(int i = 0; i < lin;i++){
        for(int j = 0; j < col; j++){
            matR[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    return matR[lin][col];
}

int multiplicaMatrizes(int mat1[][4],int mat2[][4], int matR[][4], int lin, int col){
    for(int i = 0; i < lin;i++){
        for(int j = 0; j < col; j++){
            matR[i][j] = mat1[i][j] * mat2[i][j];
        }
    }

    return matR[lin][col];
}

void transposta(int mat1[][4], int matR[][4], int lin, int col){
    for(int i = 0; i < col;i++){
        for(int j = 0; j < lin; j++){
            matR[i][j] = mat1[j][i];
        }
    }
}

void insereValIndices(int matR[][4], int lin, int col,int pl,int pc, int val){
    for(int i = 0; i < lin;i++){
        for(int j = 0; j < col; j++){
            if(i == pl && j == pc){
                matR[i][j] = val;
            }
        }
    }
}


int main()
{

    //double number = 2.346728;

    //ex1
    //printOptions();

    //ex2
    //printNumberDecimalPlaces(number,1);
    //printNumberDecimalPlaces(number,2);
    //printNumberDecimalPlaces(number,3);
    //printNumberDecimalPlaces(number,5);

    //ex3
    //cout<<endl<<"R ==> O valor da conta de energia foi de: "<<ValorContaEnergia()<<endl;

    //ex4
    //pesquisaPrefeitura();

    //ex5
    //menuSwitch();

    //ex6
    //estacaoDoAno();

    //ex7
    //cout << "O Somatorio fatorial eh: "<<somatorioFatorial(5)<<endl;

    //ex8
    //int n = 0;
    //cout<<"Digite um numero inteiro para descobrir se ele eh divisivel por 3 e 5 ao mesmo tempo :";
    //cin>>n;


    //if(ehDivisivelPor3e5(n)){
    //    cout<<endl<<"O numero eh SIM divisivel por 3 e 5 ao mesmo tempo"<<endl;
    //}
    //else{
    //    cout<<endl<<"O numero NAO eh divisivel por 3 e 5 ao mesmo tempo"<<endl;
    //}

    //ex9
    //imprimeTabelaMedia();

    //ex10
    //int tam = 10;
    //int vet[tam] = { };
    //int val = 10;
    //int busc = 20;

    //imprimeVetor(vet,tam);

    //cout<<endl<<"O maior elemento do vetor eh: "<<maiorElemento(vet,tam)<<endl;

    //insereValorIndice(vet,tam,0,val*0);
    //insereValorIndice(vet,tam,1,val*1);
    //insereValorIndice(vet,tam,2,val*2);
    //insereValorIndice(vet,tam,3,val*3);
    //insereValorIndice(vet,tam,4,val*4);
    //insereValorIndice(vet,tam,5,val*5);
    //insereValorIndice(vet,tam,6,val*6);
    //insereValorIndice(vet,tam,7,val*7);
    //insereValorIndice(vet,tam,8,val*8);

    //imprimeVetor(vet,tam);

    //cout<<endl<<"O maior elemento do vetor eh: "<<maiorElemento(vet,tam)<<endl;
    //
    //if(existeNoVetor(vet,tam,busc)){
    //    cout<<endl<<"O valor "<<busc<<" EXISTE no vetor !"<<endl;
    //}
    //else{
    //    cout<<endl<<"O valor "<<busc<<" NAO EXISTE no vetor !"<<endl;
    //}

    //cout<<endl<<"A media dos elementos do vetor eh: "<<mediaDoVetor(vet,tam)<<endl;

    //removeValorIndice(vet,tam,8);
    //imprimeVetor(vet,tam);

    //ex11
    int mat1[4][4] = { };
    int mat2[4][4] = { };
    int lin = 4;
    int col = 4;

    inicializaMatrizIdentidade(mat1,lin,col,2);

    inicializaMatrizIdentidade(mat2,lin,col,2);

    cout<<"Matriz 1 :"<<endl;
    imprimeMatriz(mat1,lin,col);
    cout<<endl<<"Matriz 2 : "<<endl;
    imprimeMatriz(mat2,lin,col);

    int matR1[4][4] = { };
    int matR2[4][4] = { };
    int matR3[4][4] = { };
    int matR4[4][4] = { };

    cout<<endl<<"Matriz 1 + Matriz 2 : "<<endl;
    somaMatrizes(mat1,mat2,matR1,lin,col);
    imprimeMatriz(matR1,lin,col);

    cout<<endl<<"Matriz 1 x Matriz 2 : "<<endl;
    multiplicaMatrizes(mat1,mat2,matR2,lin,col);
    imprimeMatriz(matR2,lin,col);


    int val = 2;
    for(int i = 0; i < lin;i++){
        for(int j = 0; j < col; j++){
            insereValIndices(matR4,lin,col,i,j,val*i);
        }
    }

    cout<<endl<<"Matriz 3: "<<endl;
    imprimeMatriz(matR4,lin,col);


    cout<<endl<<"Matriz 3 transposta : "<<endl;
    transposta(matR4,matR3,lin,col);
    imprimeMatriz(matR3,lin,col);



    return 0;
}
