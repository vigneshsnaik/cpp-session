#include <iostream>
#include <vector>

using namespace std;

class Stack {
  private:
    vector<int> data;

  public:
    void push(int val) { data.push_back(val); }

    void pop() {
        if (!isEmpty()) {
            data.pop_back();
        }
    }

    bool isEmpty() { return data.empty(); }

    int top() {
        if (!isEmpty()) {
            return data.back();
        }
        return -1; // or throw an exception
    }

    int size() { return data.size(); }
};

int main() {
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << s.top() << endl; // output: 3
    s.pop();
    cout << s.top() << endl;     // output: 2
    cout << s.size() << endl;    // output: 2
    cout << s.isEmpty() << endl; // output: 0 (false)
    s.pop();
    s.pop();
    cout << s.isEmpty() << endl; // output: 1 (true)
    return 0;
}
