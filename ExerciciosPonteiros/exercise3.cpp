/*Exercise 3
Take input in variable and display same value by pointer.
*/

#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;

    int *ptrA;
    ptrA = &a;

    cout << *ptrA << '\n';

    return 0;
}