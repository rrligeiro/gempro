/*Exercise 2
Write a C++ program to find the max of an integral data set. The program will 
ask the user to input the number of data values in the set and each value. The
 program prints on screen a pointer that points to the max value.
*/

#include <iostream>

using namespace std;

int main() {
    int max = 0, value;
    cin >> value;
    int data[value];

    for (int i = 0; i < value; i++){
        cin >> data[i];
    }
    
    for (int i = 0; i < value; i++){
        if (max <= data[i]){
            max = data[i];
        }
    }
    int *ptrMax = &max;
    cout << '\n' << "The max value is = " << *ptrMax << '\n';    
}
