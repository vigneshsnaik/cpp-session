#include <iostream>
using namespace std;
int main() {
    int a = 10, b = 20;
    cout << "a & b: " << endl;  // << a & b << endl;
    cout << "a | b: " << endl;  // << a | b << endl;
    cout << "a ^ b: " << endl;  // << a ^ b << endl;
    cout << "~a: " << endl;     // << ~a << endl;
    cout << "a << 2: " << endl; // << a << 2 << endl;
    cout << "a >> 2: " << endl; // << a >> 2 << endl;
    return 0;
}
// Output:
// a & b: 0
// a | b: 30
// a ^ b: 30
// ~a: -11
// a << 2: 40
// a >> 2: 2
// Explanation:
// & is bitwise AND
// | is bitwise OR
// ^ is bitwise XOR
// ~ is bitwise NOT
// << is bitwise left shift
// >> is bitwise right shift
