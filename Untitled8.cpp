#include <iostream>

using namespace std;

// Function to calculate Fibonacci sequence iteratively
void fibonacci_iterative(int n) {
    int fib1 = 0, fib2 = 1, fib = 0;
    cout << "Fibonacci sequence using iterative method:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << fib1 << " ";
        fib = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib;
    }
    cout << endl;
}

// Function to calculate Fibonacci sequence recursively
int fibonacci_recursive(int n) {
    if (n <= 1)
        return n;
    return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

// Function to display Fibonacci sequence using recursion
void display_fibonacci_recursive(int n) {
    cout << "Fibonacci sequence using recursive method:" << endl;
    for (int i = 0; i < n; ++i)
        cout << fibonacci_recursive(i) << " ";
    cout << endl;
}

int main() {
    int num_terms;
    cout << "Enter the number of terms for Fibonacci sequence: ";
    cin >> num_terms;

    fibonacci_iterative(num_terms);
    display_fibonacci_recursive(num_terms);
    
    return 0;
}


