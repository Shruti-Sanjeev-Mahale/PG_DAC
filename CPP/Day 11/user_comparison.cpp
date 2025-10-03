#include <iostream>

using namespace std;

int main() {
    char str1[100];
    char str2[100];
    int len1 = 0;
    int len2 = 0;
    
    cout << "Enter the first string (one word): ";
    cin >> str1;
    
    cout << "Enter the second string (one word): ";
    cin >> str2;

    while (str1[len1] != '\0') {
        len1++;
    }
    
    while (str2[len2] != '\0') {
        len2++;
    }
    
    // Use an integer flag; initialize to 0 (equal)
    int isEqualFlag = 0;

    if (len1 != len2) {
        isEqualFlag = 1; // Set flag to 1 if lengths differ
    } else {
        int i = 0;
        while (i < len1) {
            if (str1[i] != str2[i]) {
                isEqualFlag = 1; // Set flag to 1 on mismatch
                break;
            }
            i++;
        }
    }

    if (isEqualFlag == 0) {
        cout << "The strings are equal." << endl;
    } else {
        cout << "The strings are not equal." << endl;
    }

    return 0;
}