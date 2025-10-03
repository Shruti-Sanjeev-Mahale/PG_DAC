#include <iostream>
using namespace std;
class MyClass {
public:
    const int constantMember;
    static int staticMember;

    MyClass(int constVal) : constantMember(constVal) {
    }

    void display() {
            cout << "Constant Member: " << constantMember <<endl;
            cout << "Static Member: " << staticMember <<endl;
    }

    void incrementStatic() {
        staticMember++;
    }
};
int MyClass::staticMember = 0;

int main() {
    MyClass obj1(10);

        cout << "Initial state:" <<endl;
        cout << "Object 1: ";
        obj1.display();
        cout <<endl;
        obj1.incrementStatic();
        cout << "After incrementing static member via obj1:" <<endl;
        cout << "Object 1: ";
        obj1.display();
        
}