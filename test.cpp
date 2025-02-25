#include <iostream>
#include <cmath>
#include <cassert>

using namespace std;

void testSquareRoot() {
    assert(sqrt(4) == 2);
    assert(sqrt(9) == 3);
    assert(sqrt(0) == 0);
    assert(sqrt(16) == 4);
    cout << "testSquareRoot passed!" << endl;
}

void testFactorial() {
    auto factorial = [](int x) {
        if (x < 0) return -1LL;
        long long fact = 1;
        for (int i = 1; i <= x; ++i) {
            fact *= i;
        }
        return fact;
    };
    
    assert(factorial(0) == 1);
    assert(factorial(5) == 120);
    assert(factorial(7) == 5040);
    cout << "testFactorial passed!" << endl;
}

void testNaturalLog() {
    assert(log(1) == 0);
    assert(abs(log(exp(1)) - 1) < 1e-9);
    assert(abs(log(exp(2)) - 2) < 1e-9);
    cout << "testNaturalLog passed!" << endl;
}

void testPower() {
    assert(pow(2, 3) == 8);
    assert(pow(5, 2) == 25);
    assert(pow(10, 0) == 1);
    cout << "testPower passed!" << endl;
}

int main() {
    testSquareRoot();
    testFactorial();
    testNaturalLog();
    testPower();
    cout << "All tests passed successfully!" << endl;
    return 0;
}
