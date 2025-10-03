#include <iostream>
using namespace std;
void swapByReference(int &x, int &y); 

int main() {
    int a = 10, b = 20;

          cout << "Before swap: a = " << a << ", b = " << b <<endl;

    
    swapByReference(a, b); 

          cout << "After swap: a = " << a << ", b = " << b <<endl;

}

void swapByReference(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}