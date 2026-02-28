#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int a = 0, b = 1;
    
    cout << "Fibonacci series: ";
    for(int i = 0; i < n; i++) {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
    
    return 0;
}

// Fibonacci series: 0 1 1 2 3 5 8 13 21 34