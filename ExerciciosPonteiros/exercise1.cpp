/*Exercise 1
Write a program that asks the user to enter integers as inputs to be stored in the variables 'a' and 'b'
respectively. There are also two integer pointers named ptrA and ptrB. Assign the values of 'a' and 'b' 
to ptrA and ptrB respectively, and display them.
*/

#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int *ptrA, *ptrB;
    ptrA = &a;
    ptrB = &b;

    cout << *ptrA << ' ' << *ptrB << '\n';

    return 0;
}
