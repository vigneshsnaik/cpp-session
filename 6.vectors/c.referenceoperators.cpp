#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> myVector = {1, 2, 3, 4, 5};

    // Print the original vector
    cout << "Original vector: ";
    for (int i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << " ";
    }
    cout << endl;

    // Use reference operator to modify the vector
    for (int &element : myVector) {
        element *= 2;
    }

    // Print the modified vector
    cout << "Modified vector: ";
    for (int i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << " ";
    }
    cout << endl;

    return 0;
}
