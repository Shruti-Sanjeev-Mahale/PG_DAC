#include <iostream>
using namespace std;
int main() {
    // Variable declarations
    int a = 10;
    int b = 3;
    bool x = true;
    bool y = false;

    // 1. Arithmetic Operators
      cout << "--- Arithmetic Operators ---" <<   endl;
      cout << "a + b = " << a + b <<   endl;      // Addition
      cout << "a - b = " << a - b <<   endl;      // Subtraction
      cout << "a * b = " << a * b <<   endl;      // Multiplication
      cout << "a / b = " << a / b <<   endl;      // Division (integer division)
      cout << "a % b = " << a % b <<   endl;      // Modulus

    // 2. Relational Operators
      cout << "\n--- Relational Operators ---" <<   endl;
      cout << "a > b is " << (a > b) <<   endl;   // Greater than
      cout << "a < b is " << (a < b) <<   endl;   // Less than
      cout << "a == b is " << (a == b) <<   endl; // Equal to
      cout << "a != b is " << (a != b) <<   endl; // Not equal to
      cout << "a >= b is " << (a >= b) <<   endl; // Greater than or equal to
      cout << "a <= b is " << (a <= b) <<   endl; // Less than or equal to

    // 3. Logical Operators
      cout << "\n--- Logical Operators ---" <<   endl;
      cout << "x && y is " << (x && y) <<   endl; // Logical AND
      cout << "x || y is " << (x || y) <<   endl; // Logical OR
      cout << "!x is " << (!x) <<   endl;         // Logical NOT

    // 4. Unary Operators
      cout << "\n--- Unary Operators ---" <<   endl;
    int c = 5;
      cout << "Initial value of c: " << c <<   endl;
      cout << "++c (pre-increment): " << ++c <<   endl;
      cout << "Value of c after pre-increment: " << c <<   endl;
      cout << "c-- (post-decrement): " << c-- <<   endl;
      cout << "Value of c after post-decrement: " << c <<   endl;
      cout << "-a (unary minus): " << -a <<   endl;

    // 5. Ternary Operator
      cout << "\n--- Ternary Operator ---" <<   endl;
    int max = (a > b) ? a : b;
      cout << "The greater number between a and b is: " << max <<   endl;

    // 6. Assignment Operators
      cout << "\n--- Assignment Operators ---" <<   endl;
    int result = 20;
      cout << "Initial result: " << result <<   endl;
    result += 5; // result = result + 5
      cout << "result after += 5: " << result <<   endl;
    result -= 3; // result = result - 3
      cout << "result after -= 3: " << result <<   endl;
    result *= 2; // result = result * 2
      cout << "result after *= 2: " << result <<   endl;
    result /= 4; // result = result / 4
      cout << "result after /= 4: " << result <<   endl;
    result %= 3; // result = result % 3
      cout << "result after %= 3: " << result <<   endl;
    
    return 0;
}