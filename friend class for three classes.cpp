//create a friend class for three classes A, B and C. Create private and protected data members in class A, B and C. Access all the private and protected data with the help of friend class.
#include <iostream>
using namespace std;

class A; 
class B; 
class C; 

class FriendClass { 
public:
    void displayA(const A &a);
    void displayB(const B &b);
    void displayC(const C &c);
};

class A {
private:
    int privateA = 10;
protected:
    int protectedA = 20;

public:
    friend class FriendClass; 
};

class B {
private:
    int privateB = 30;
protected:
    int protectedB = 40;

public:
    friend class FriendClass; 
};

class C {
private:
    int privateC = 50;
protected:
    int protectedC = 60;

public:
    friend class FriendClass; 
};
void FriendClass::displayA(const A &a) {
    cout << "Class A - Private: " << a.privateA << ", Protected: " << a.protectedA << endl;
}

void FriendClass::displayB(const B &b) {
    cout << "Class B - Private: " << b.privateB << ", Protected: " << b.protectedB << endl;
}

void FriendClass::displayC(const C &c) {
    cout << "Class C - Private: " << c.privateC << ", Protected: " << c.protectedC << endl;
}

int main() {
    A a;
    B b;
    C c;
    FriendClass friendClass;

    friendClass.displayA(a);
    friendClass.displayB(b);
    friendClass.displayC(c);

    return 0;
}
