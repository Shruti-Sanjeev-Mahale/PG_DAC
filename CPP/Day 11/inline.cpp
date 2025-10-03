#include<iostream>
using namespace std;
inline int multiply(int a, int b) {
    return a * b;
}

int main() {
    int result = multiply(5, 10);
    cout << "The product is: " << result <<endl;

}