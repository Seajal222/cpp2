//create a friend function for three classes A, B and C. Create private and protected data members in class A, B and C. Access all the private and protected data with the help of friend function
#include <iostream>
using namespace std;

class A;
class B;
class C;

void displayDetails(const A &a, const B &b, const C &c);

class A {
private:
    int privateA = 10;
protected:
    int protectedA = 20;

public:
    friend void displayDetails(const A &a, const B &b, const C &c);
};

class B {
private:
    int privateB = 30;
protected:
    int protectedB = 40;

public:
    friend void displayDetails(const A &a, const B &b, const C &c);
};

class C {
private:
    int privateC = 50;
protected:
    int protectedC = 60;

public:
    friend void displayDetails(const A &a, const B &b, const C &c);
};

void displayDetails(const A &a, const B &b, const C &c) {
    cout << "Class A - Private: " << a.privateA << ", Protected: " << a.protectedA << endl;
    cout << "Class B - Private: " << b.privateB << ", Protected: " << b.protectedB << endl;
    cout << "Class C - Private: " << c.privateC << ", Protected: " << c.protectedC << endl;
}

int main() {
    A a;
    B b;
    C c;

    displayDetails(a, b, c);

    return 0;
}
