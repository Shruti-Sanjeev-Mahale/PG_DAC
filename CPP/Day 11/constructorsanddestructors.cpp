#include <iostream>
using namespace std;
class MyClass {
public:
  
    MyClass() {
              cout << "Constructor called: MyClass object created."  <<endl;
    }

    ~MyClass() {
              cout << "Destructor called: MyClass object destroyed."  <<endl;
    }
};

int main() {
          cout << "Starting the main function."  <<endl;
    
    MyClass myObject;
    
      cout << "Exiting the main function."  <<endl;

    
    
}