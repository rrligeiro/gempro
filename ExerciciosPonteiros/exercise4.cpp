/*Exercise 4
Given the string "A string." Print on one line the letter on the index 0, the pointer 
position and the letter t. undate the pointer to pointer +2. Then, in another line print 
the pointer and the letters r and g of the string (using the pointer).
*/

#include <iostream>

using namespace std;

int main() {
    char string[] = "A string.";
    char *ptr = &string[0];
    cout << "Letter index 0 = " << *ptr << "\n";
    cout << "The pointer position = " << *ptr << '\n';
    ptr = ptr + 3;
    cout << "The letter " << *ptr << '\n';
    
    ptr = &string[0];
    ptr = ptr + 2;
    cout << "The pointer = " << ptr << '\n';
    ptr = ptr + 2;
    cout << "The letter " << *ptr << '\n';
    ptr = ptr + 3;
    cout << "The letter " << *ptr << '\n';

    return 0;
}