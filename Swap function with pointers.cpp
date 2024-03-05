#include <iostream>
#include <string>

using namespace std;

void swaping(int* a, int* b ) {
    int temp = *a;//stores the data of the memory address "a" in a temporary variable
    *a = *b; //put the data of the memory address "b" in the memory address "a"
    *b = temp;//put the data of the temporary variable in the memory address "b"
}

int main () {
    int a;
    int b;
    cout << "Enter the first number: ";
    cin >> a;//taking first input
    cout << "\n";
    cout << "Enter the second number: ";
    cin >> b;//taking second input
    cout << "\n";
    swaping(&a,&b);//swapping function takes the memory addresses of two integers as arguments
    cout << a << " " << b;//printing result after swap
    return 0;
}
