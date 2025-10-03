#include <iostream>

using namespace std;

int main() {
    char str[100];
    int length = 0;
    cout << "Enter a string (one word): ";
    cin >> str;
    while (str[length] != '\0') {
        length++;
    }

    cout << "The length of the string is: " << length << endl;
    return 0;
}