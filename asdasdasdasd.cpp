#include <iostream>
using namespace std;

int fib1, fib2, ans;

int main(){
	int num_terms;
	cout << "Enter the number of sequence for Fibonacci sequence: ";
	cin >> num_terms;
	cout << "Enter 1st number: ";
	cin >> fib1;
	cout << "Enter 2nd number: ";
	cin >> fib2;
	
	
	int fib1 = 0, fib2 = 1, fib;
    cout << "Fibonacci sequence:" << endl;
    cout << fib1 << " " << fib2 << " ";
    for (int i = 2; i < num_terms; ++i) {
        fib = fib1 + fib2;
        cout << fib << " ";
        fib1 = fib2;
        fib2 = fib;
    }
    cout << endl;

    return 0;
}
