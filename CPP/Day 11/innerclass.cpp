#include <iostream>
using namespace std:
class Outer {
public:
    // A public method to demonstrate inner class usage
    void display() {
        innerObj.printMessage();
    }

private:
    // The inner class is defined here
    class Inner {
    public:
        void printMessage() {
            cout << "This is the inner class." <<endl;
        }
    };
    
    // An object of the inner class
    Inner innerObj;
};

int main() {
    Outer outerObj;
    outerObj.display(); // Calls the outer class method, which in turn uses the inner class
    return 0;
}