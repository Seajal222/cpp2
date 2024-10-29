//Find the sum of two numbers, three numbers and four numbers with the help of function overloading.
#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

int sum(int a, int b, int c) {
    return a + b + c;
}

int sum(int a, int b, int c, int d) {
    return a + b + c + d;
}

int main() {
    int num1, num2, num3, num4;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Sum of two numbers: " << sum(num1, num2) << endl;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    cout << "Sum of three numbers: " << sum(num1, num2, num3) << endl;

    cout << "Enter four numbers: ";
    cin >> num1 >> num2 >> num3 >> num4;
    cout << "Sum of four numbers: " << sum(num1, num2, num3, num4) << endl;

    return 0;
}
