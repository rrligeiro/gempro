/*4. Implemente uma função que calcule a área da superfície e o
volume de uma esfera de raio R. Essa função deve obedecer ao
protótipo:
    void calc_esfera(float R, float *area, float *volume);
A área da superfície e o volume são dados, respectivamente,
por: A = 4* p * R * R 
V = 4/3 * p * R* R * R                   */

#include <bits/stdc++.h>

using namespace std;

void calc_esfera(float R);

int main(){

    float R;

    cout << "Insira o raio da esfera: " << endl;
    cin >> R;

    calc_esfera(R);

    return 0;
}

void calc_esfera(float R){
    float area, volume;
    area = 4 * 3.1415 * R * R;
    volume = 4.0/3 * 3.1415 * R * R * R;
    
    cout << R <<" A esfera possui area: " << area << " e volume: " << volume << endl;
}