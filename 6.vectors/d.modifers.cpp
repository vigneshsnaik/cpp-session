#include <iostream>
#include <vector>

using namespace std;

int main() {
    // create a vector of integers
    vector<int> myVector = {1, 2, 3, 4, 5};

    // print the original vector
    cout << "Original vector: ";
    for (int i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << " ";
    }
    cout << endl;

    // add an element to the end of the vector
    myVector.push_back(6);

    // print the modified vector
    cout << "Vector after push_back(): ";
    for (int i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << " ";
    }
    cout << endl;

    // remove the last element from the vector
    myVector.pop_back();

    // print the modified vector
    cout << "Vector after pop_back(): ";
    for (int i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << " ";
    }
    cout << endl;

    // insert an element at a specific position in the vector
    myVector.insert(myVector.begin(), 10);

    // print the modified vector
    cout << "Vector after insert(): ";
    for (int i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << " ";
    }
    cout << endl;

    // erase an element at a specific position in the vector
    myVector.erase(myVector.begin());

    // print the modified vector
    cout << "Vector after erase(): ";
    for (int i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << " ";
    }
    cout << endl;

    // swap two vectors
    vector<int> anotherVector = {10, 20, 30};
    cout << "Before swap: " << endl;
    cout << "myVector: ";
    for (int i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << " ";
    }
    cout << endl;
    cout << "anotherVector: ";
    for (int i = 0; i < anotherVector.size(); i++) {
        cout << anotherVector[i] << " ";
    }
    cout << endl;

    cout << "After swap: " << endl;
    cout << "myVector: ";
    for (int i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << " ";
    }
    cout << endl;
    cout << "anotherVector: ";
    for (int i = 0; i < anotherVector.size(); i++) {
        cout << anotherVector[i] << " ";
    }
    cout << endl;

    return 0;
}
