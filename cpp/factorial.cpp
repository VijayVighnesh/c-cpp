#include <iostream>
using namespace std;

int factorial(int n) {
    int result = 1;
    for(int i = 1; i <= n; i++) {
        result  = result * i;
    }
    return result;
}

int main() {
    int num;
    cout << "Enter the number you wnat factorial for : ";
    cin >> num;
    cout << "Factorial of " << num << " = " << factorial(num) << endl;
    return 0;
}


// 5! => 5 * 4 * 3 * 2 * 1