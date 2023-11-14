#include <iostream>
using namespace std;

int main() {
    int a = 20;
    cout << (a == 10 ? "a is 10" : "a is not 10") << endl;
    return 0;
}
// example:
// std max function can be implemented using ternery operator
int max(int a, int b) { return a > b ? a : b; }