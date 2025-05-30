#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }

    int multiply(int a, int b) {
        return a * b;
    }

    int divide(int a, int b) {
        if (b == 0) {
            cout << "Error: Division by zero!\n";
            return 0;
        }
        return a / b;
    }

    double add(double a, double b) 
	{
        return a + b;
    }

    double subtract(double a, double b) 
	{
        return a - b;
    }

    double multiply(double a, double b) 
	{
        return a * b;
    }

    double divide(double a, double b) 
	{
        if (b == 0.0) 
		{
            cout << "Error: Division by zero!\n";
            return 0.0;
        }
        return a / b;
    }
};

int main() {
    Calculator calc;

    int a = 10, b = 5;
    cout << "Integer Addition: " << calc.add(a, b) << endl;
    cout << "Integer Subtraction: " << calc.subtract(a, b) << endl;
    cout << "Integer Multiplication: " << calc.multiply(a, b) << endl;
    cout << "Integer Division: " << calc.divide(a, b) << endl;

    cout << "----------------------------\n";

    double x = 12.5, y = 4.2;
    cout << "Double Addition: " << calc.add(x, y) << endl;
    cout << "Double Subtraction: " << calc.subtract(x, y) << endl;
    cout << "Double Multiplication: " << calc.multiply(x, y) << endl;
    cout << "Double Division: " << calc.divide(x, y) << endl;

    return 0;
}
