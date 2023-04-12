#include <iostream>

using namespace std;






int main()
{
    //declarando variavel
    int var;
    //declarando ponteiro (Uma variavel que armazena enderecos de memoria)
    int *ptr;
    //inicializando ponteiro -> aponta para o endereço de 'var'
    ptr = &var;
    //inicializando variavel 'var'
    var = 10;

    cout<<"Valor da variavel (var):"<<var<<endl;
    cout<<"Endereco da variavel (&var): "<<&var<<endl;
    cout<<"Valor da variavel acessado por ponteiro (*ptr): "<<*ptr<<endl;
    cout<<"Endereco da variavel acessado por ponteiro (ptr): "<<ptr<<endl;


    cout<<endl<<"(a) int *p = declarando um ponteiro"<<endl;
    cout<<"(b) cout << *p; = imprimindo o valor de uma variavel atraves do ponteiro que a aponta"<<endl;
    cout<<"(c) *p = x*5; = modificando o valor de uma variavel atraves do ponteiro"<<endl;
    cout<<"(d) cout << *(p+1); = alterando o endereco atraves de aritimetica de ponteiro"<<endl;

    int i = 3, j = 5;
    int *p = &i, *q = &j;

    cout<<endl<<"*p = "<<*p<<endl;
    cout<<endl<<"*q = "<<*q<<endl;

    cout<<endl<<"p == &i => true"<<endl;
    cout<<endl<<"*p - *q = "<<*p - *q<<endl;
    cout<<endl<<"**&p = "<<**&p<<endl;
    cout<<endl<<"3*-*p/(*q)+7 = "<<3*-*p/(*q)+7<<endl;

    int x = 5;
    int *y;
    y = &x;
    cout<<endl<<"*y = "<<*y<<endl<<"(*y+2) ="<<(*y+2)<<endl<<"**&y ="<<**&y<<endl<<"(3**y) ="<<(3**y)<<endl<<"(**&y + 4) ="<<(**&y + 4)<<endl;


    return 0;
}

/*
PONTEIROS

EX =  pt_num = pt_num + 1;

===> ao somar 1 a um ponteiro, vocˆe est´a indo para o
enderec¸o do proximo elemento do tipo de dado do
ponteiro(1+ para TIPO double adiciona
8, 1+ para TIPO int adiciona 4(bytes);



===> pt tipo = pt tipo + tam(tipo)*n;
*/




/*
????????????????????????

**&y + 4
(3**y)
3*-*p/(*q)+7
*(p+1)
(*y+2)

????????????????????

*/
