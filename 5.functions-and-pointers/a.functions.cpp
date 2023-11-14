#include <iostream>
using namespace std;

// function declaration
void swap(int *x, int *y);

int main() {
    int a = 5, b = 10;

    cout << "Before swap, a = " << a << " and b = " << b << endl;

    // calling the swap function
    swap(&a, &b);

    cout << "After swap, a = " << a << " and b = " << b << endl;

    return 0;
}

// function definition
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
