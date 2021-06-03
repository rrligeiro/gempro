#include <iostream>

using namespace std;

int main(){
   
    float array[10];

    for (int i = 0; i < 10; i++){
        cout << "Posição "<< i << " endereço de memória " << &array[i] << endl;
    }

    return 0;
}