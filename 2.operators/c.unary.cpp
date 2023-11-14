#include <iostream>
using namespace std;
int main() {
    int a = 10, b = 20;
    cout << "a before increment: " << a << endl;
    cout << "pre-increment a: " << endl; // << ++a << endl;
    cout << "a after increment: " << a << endl;

    a = 10;
    b = 20;
    cout << "a before increment: " << a << endl;
    cout << "post-increment a: " << endl; // << a++ << endl;
    cout << "a after increment: " << a << endl;

    cout << "a before negation: " << a << endl;
    cout << "negation of a: " << endl; // << -a << endl;

    return 0;
}