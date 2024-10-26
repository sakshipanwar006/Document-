Write a program to display the product of two numbers using single inheritance where numbers are declared inside the base class. Function of product both numbers defined in the derived class.
#include <iostream>
using namespace std;


class Base {
protected:
    int num1, num2; 

public:
    
    Base(int a, int b) : num1(a), num2(b) {}
};


class Derived : public Base {
public:
    
    Derived(int a, int b) : Base(a, b) {}

    
    void displayProduct() {
        int product = num1 * num2; 
        cout << "The product of " << num1 << " and " << num2 << " is: " << product << endl;
    }
};

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    
    Derived obj(a, b);
    obj.displayProduct(); 

    return 0;
}
