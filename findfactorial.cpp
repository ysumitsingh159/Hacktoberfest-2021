#include <iostream>
using namespace std;
//c++ program to find factorial of a given number
//the factorial of a non-negative integer n, denoted by n!, is the product of all positive integers less than or equal to n
//n! = 1 * 2 * 3 * ... * n
//n! = 1 if n = 0 or n = 1//contributed by subho004


int main() {
    int n;
    long double factorial = 1.0;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0)
        cout << "Error! Factorial of a negative number doesn't exist.";
    else {
        for(int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << n << " = " << factorial;    
    }

    return 0;
}