//Find the sum of three numbers with the help of function overriding. Display sum of base class with the help of derived class object and vice versa.
#include <iostream>
using namespace std;

class Base {
public:
    virtual int sum(int a, int b, int c) {
        return a + b + c;
    }
};

class Derived : public Base {
public:
    int sum(int a, int b, int c) override {
        return a + b + c + 10; 
    }
};

int main() {
    Base baseObj;
    Derived derivedObj;

    int num1, num2, num3;

    cout << "Enter three numbers for Base class: ";
    cin >> num1 >> num2 >> num3;
    cout << "Sum from Base class: " << baseObj.sum(num1, num2, num3) << endl;

    cout << "Enter three numbers for Derived class: ";
    cin >> num1 >> num2 >> num3;
    cout << "Sum from Derived class: " << derivedObj.sum(num1, num2, num3) << endl;

    Base *ptr = &derivedObj;
    cout << "Sum from Base class using Derived object: " << ptr->sum(num1, num2, num3) << endl;

    return 0;
}
