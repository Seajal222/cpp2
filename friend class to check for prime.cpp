//Create a friend class to check if a number is prime or not
#include <iostream>
using namespace std;
class Number; 
class PrimeChecker {
public:
    bool isPrime(Number &num);
};
class Number {
private:
    int value;
public:
    Number(int v) : value(v) {}
    friend class PrimeChecker;
};
bool PrimeChecker::isPrime(Number &num) {
    if (num.value <= 1) return false;
    for (int i = 2; i * i <= num.value; i++) {
        if (num.value % i == 0) return false;
    }
    return true;
}
int main() {
    int input;
    cout << "Enter a number to check if it is prime: ";
    cin >> input;
    Number number(input);
    PrimeChecker checker;
    if (checker.isPrime(number)) {
        cout << input << " is a prime number." << endl;
    } else {
        cout << input << " is not a prime number." << endl;
    }
    return 0;
}
