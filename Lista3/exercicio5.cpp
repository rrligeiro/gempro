/*5. Crie uma função para verificar se um número é primo ou não,
utilizando ponteiros e recursão ou ponteiros e looping.*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    int num, count = 0;

    cout << "Insira um numero para verificar se ele e primo: " << endl;
    cin >> num;

    for (int i = 2; i < num; i++){
        if(num%i == 0){
            count++;
        }        
    }
    
    if (count>=1){
        cout << "O número não é primo." << endl;
    } else {
        cout << "O número é primo." << endl;
    }

    return 0;
}