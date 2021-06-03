/*3. Utilizando ponteiros, faça um programa que leia três valores
inteiros e chame uma função que receba estes 3 valores de
entrada e retorne eles ordenados, ou seja, o menor valor na
primeira variável, o segundo menor valor na variável do meio, e
o maior valor na última variável. A função deve retornar o valor
1 se os três valores forem iguais e 0 se existirem valores
diferentes. Exibir os valores ordenados na tela.*/

#include <bits/stdc++.h>

using namespace std;

int ordenarNumeros(int *aPtr, int *bPtr, int *cPtr);
int a, b, c;

int main(){

    cin >> a >> b >> c;
    int retorno = ordenarNumeros(&a, &b, &c);

    if ( retorno == 0 ){
        cout << a << " " << b << " " << c << endl;
    }
    if ( retorno == 1 ){
        cout << "Os números são iguais." << endl;
    }

    return 0;
}

int ordenarNumeros(int *aPtr, int *bPtr, int *cPtr){

    if(*aPtr == *bPtr && *bPtr == *cPtr){
        return 1;
    }

    vector<int> vec = {*aPtr, *bPtr, *cPtr};

    sort(vec.begin(), vec.end());

    a = vec[2];
    b = vec[1];
    c = vec[0];

    return 0;
}