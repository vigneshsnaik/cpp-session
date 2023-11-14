#include <iostream>
using namespace std;
int main() {
    int a = 10;

    cout << a << endl;  // this prints the value of a
    cout << &a << endl; // this prints the address of a

    auto addr = &a;

    cout << addr << endl;  // this prints the address of a
    cout << *addr << endl; // this prints the content of addr
}