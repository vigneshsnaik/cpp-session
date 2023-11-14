#include <iostream>
using namespace std;
int main() {
    int a[5] = {0, 0, 0, 0, 0};

    for (int i = 0; i < 5; i++) {
        cout << "a[i] is" << a[0] << "stored at" << &a[i] << endl;
    }

    cout << a
         << endl; // this prints the pointer to the first element of the array

    for (int i = 0; i < 5; i++) {
        cout << "a[i] is" << a[0] << "stored at" << &a[i] << endl;
    }
}