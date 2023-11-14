#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> s;

    cout << "empty ? " << s.empty() << endl;
    // Push elements onto the stack
    s.push(10);
    s.push(20);
    s.push(30);
    cout << "empty ? " << s.empty() << endl;
    cout << s.top() << endl;
    // Pop elements from the stack
    s.pop();
    cout << s.top() << endl;

    // Get the size of the stack
    cout << "Size of stack is: " << s.size() << endl;

    return 0;
}
