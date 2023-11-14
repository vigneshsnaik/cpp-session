#include <iostream>
using namespace std;
#include <string>

int main() {
    string str1 = "Namaste, ";
    string str2 = "world!";
    string str3 = str1 + str2; // Concatenate str1 and str2

    // Traverse the concatenated string and print each character
    for (int i = 0; i < str3.length(); i++) {
        cout << str3[i] << endl;
    }
    for (char c : str3) {
        cout << c << " ";
    }
    return 0;
}
