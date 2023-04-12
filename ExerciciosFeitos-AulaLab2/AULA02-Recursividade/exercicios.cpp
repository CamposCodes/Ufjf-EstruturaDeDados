#include <iostream>

using namespace std;

int fatorial(int n){
    if(n == 0 || n == 1 ){
        return 1;
    }
    else{
        return n * fatorial(n-1);
    }

}


void imprimeIntervalo(int a, int b, int inc)
{
	if(a <= b){
		cout << a << " ";
		imprimeIntervalo(a+inc, b,inc);
	}
}

void imprimeDecrescente(int n){
    if(n == 0){
        cout<<0;
    }
    else{
        cout<<n<<" ";
        imprimeDecrescente(n-1);
    }
}

float soma(int n, float vet[]){
    if(n == 1){
        return vet[0];
    }
    else{
        return vet[n-1] + (soma(n-1,vet));
    }
}

float menor(int n, float vet[]){
    if(n == 1){
        return vet[0];
    }
    float z = menor(n-1,vet);
    if(z < vet[n-1]){
        return z;
    }
    else{
        return vet[n-1];
    }
}

int contaPares(int n, int vet[])
{
	if(n == 1) {
		// caso base
		if (vet[0] % 2 == 0){
			return 1;
		}
	}

	int x = contaPares(n-1,vet) ;
	// passo recursivo
	if (vet[n-1] % 2 == 0){
		return x+1;
	}else{
		return x;
	}
}

int main()
{
    cout<<"==> exercicio 1 - recursividade"<<endl<<endl;
    cout<<"Digite um valor para o calculo do fatorial:";
    int x;
    cin>>x;
    cout<<endl<<"O fatorial de "<<x<<" eh: "<<fatorial(10)<<endl;
    cout<<endl;

    cout<<"==> exercicio 2 - recursividade"<<endl<<endl;
    imprimeIntervalo(1,8,2);
    cout<<endl;
    cout<<endl;
    cout<<"==> exercicio 3 - recursividade"<<endl<<endl;
    cout<<"Digite um valor para a sequencia decrescente: ";
    int y;
    cin>>y;
    cout<<endl<<"A sequencia eh: ";
    imprimeDecrescente(y);
    cout<<endl;
    cout<<endl;

    cout<<"==> exercicio 4 - recursividade"<<endl<<endl;
    int n;
    cout<<"Digite o tamanho desejado para o vetor: ";
    cin>>n;
    float vet[n];
    cout<<endl<<"Digite os valores do vetor... "<<endl;
    for(int i = 0; i < n; i++){
        cout<<"vet["<<i<<"] = ";
        cin>>vet[i];
    }
    cout<<endl;
    cout<<"A soma dos elementos do vetor eh: "<<soma(n, vet)<<endl;

    cout<<endl<<"==> exercicio 5 - recursividade"<<endl<<endl;
    cout<<"O menor elemento do vetor eh: "<<menor(n, vet)<<endl;

    cout<<endl<<"==> exercicio 6 - recursividade"<<endl<<endl;
    int tam;
    cout<<"Digite o tamanho desejado para o vetor: ";
    cin>>tam;
    int vet1[tam];
    cout<<endl<<"Digite os valores do vetor... "<<endl;
    for(int i = 0; i < tam; i++){
        cout<<"vet["<<i<<"] = ";
        cin>>vet1[i];
    }
    cout<<"O numero de elementos pares do vetor eh: "<<contaPares(tam, vet1)<<endl;


    return 0;
}
